import os
import argparse
import struct
import random
import numpy as np
from sklearn import linear_model
from scipy.misc import imresize
from sklearn.neural_network import MLPClassifier
from CrossSLP import SLP
import matplotlib
import matplotlib.pyplot as plt


RATE = 0.002
COEFF = 0.01
SCALE = 100
LAMBDA = 1.0507009873554804934193349852946
ALPHA = 1.6732632423543772848170429916717

# File names
TRAIN_DAT = 'train-images-idx3-ubyte'
TRAIN_LAB = 'train-labels-idx1-ubyte'
TEST_DAT = 't10k-images-idx3-ubyte'
TEST_LAB = 't10k-labels-idx1-ubyte'

def show(image):
    """
    Render a given numpy.uint8 2D array of pixel data.
    """
    from matplotlib import pyplot
    import matplotlib as mpl
    fig = pyplot.figure()
    ax = fig.add_subplot(1,1,1)
    imgplot = ax.imshow(image, cmap=mpl.cm.Greys)
    imgplot.set_interpolation('nearest')
    ax.xaxis.set_ticks_position('top')
    ax.yaxis.set_ticks_position('left')
    pyplot.show()

def download(args):
    """
    Downloads the MNIST dataset into the specified dir.
    source: mxnet
    """
    if not os.path.isdir(args.data_dir):
        os.system("mkdir " + args.data_dir)
    os.chdir(args.data_dir)
    if (not os.path.exists(TRAIN_DAT)) or \
       (not os.path.exists(TRAIN_LAB)) or \
       (not os.path.exists(TEST_DAT)) or \
       (not os.path.exists(TEST_LAB)):
        import urllib, zipfile
        zippath = os.path.join(os.getcwd(), "mnist.zip")
        urllib.urlretrieve("http://data.mxnet.io/mxnet/data/mnist.zip", zippath)
        zf = zipfile.ZipFile(zippath, "r")
        zf.extractall()
        zf.close()
        os.remove(zippath)
    os.chdir("..")

def getIterator(args, mode):
    """
    Get an iterator from the MNIST raw data files in the form of [label, array].
    source: https://gist.github.com/akesling/5358964
    """

    fname_img = os.path.join(args.data_dir, TEST_DAT if mode=='test' else TRAIN_DAT)
    fname_lbl = os.path.join(args.data_dir, TEST_LAB if mode=='test' else TRAIN_LAB)

    # Access label and data from bit files
    with open(fname_lbl, 'rb') as flbl:
        magic, num = struct.unpack(">II", flbl.read(8))
        lbl = np.fromfile(flbl, dtype=np.int8)
    with open(fname_img, 'rb') as fimg:
        magic, num, rows, cols = struct.unpack(">IIII", fimg.read(16))
        img = np.fromfile(fimg, dtype=np.uint8).reshape(len(lbl), rows, cols)
 
    # Format tuple: (label, data)
    get_img = lambda idx: (lbl[idx], img[idx])

    # Create an iterator which returns each image in turn
    for i in xrange(len(lbl)):
        yield get_img(i)

def getDataSet(args, mode):
    """
    Produces scaled down, flattened dataset
    """

    # Download MNIST dataset if it hasn't been already downloaded
    download(args)
    # Process the raw data
    mnistData = getIterator(args, mode)

    # Data and labels
    data = []
    labels = []
    # Tracks positive and negative samples
    (pos, neg) = (0, 0)

    # Iterate until we have enough samples
    for t in mnistData:
        lab = t[0]
        img = t[1]
        # Resize the image
        img = imresize(img, (args.dim, args.dim), interp='bilinear')
        # Reshape
        datum = np.divide(img.reshape((args.dim*args.dim,)), 1)
        # Prepare the labels (one-hot encoded)
        label = np.zeros(10)
        label[lab] = 1.0

        if args.debug:
            # Display the image
            show(img)
            # Print label
            print 'Label: {}'.format(lab)

        data.append(datum)
        labels.append(label)

    return np.array(data), np.array(labels)


def parse_args():
    parser = argparse.ArgumentParser(description='produce synthesis constraints from mnist training data')
    parser.add_argument('--data-dir', type=str, default='mnist/',
                        help='the input data directory')
    parser.add_argument('--num-examples', type=int, default=8,
                        help='the number of training examples')
    parser.add_argument('--dim', type=int, default=16,
                        help='height and width of mnist dataset to resize to')
    parser.add_argument('--debug', action='store_true',
                        help='debug mode')
    parser.add_argument('--errorplot', action='store_true', help='plot error over time')
    return parser.parse_args()

if __name__ == '__main__':
    args = parse_args()

    # Extract the training dataset
    train_data, train_labels = getDataSet(args, 'train')
    # Extract the training dataset
    test_data, test_labels = getDataSet(args, 'test')

    network = SLP(256, 10, COEFF, RATE, ALPHA, LAMBDA, args)
    data_norm = np.true_divide(train_data, 256.0)
    network.fit(train_data, train_labels)

    weight = network.weightsT
    offset = network.biases
    weight = np.clip(weight*SCALE, -128,127)
    weight = weight.astype(np.int8)
    offset = np.clip(offset*SCALE, -128,127)
    offset = offset.astype(np.int32)
    # Perform fixed-point classification
    ones = np.ones(len(test_data)).reshape((len(test_data),1))
    i_p = np.append(ones, test_data, axis=1)
    w_p = np.append(offset.reshape(10,1), weight, axis=1)
    fixed_labels = np.dot(i_p, w_p.T)
    float_labels = network.predict(test_data, debug=True)[1]
    print(np.shape(float_labels))
    print(np.shape(fixed_labels))

    # Measure Validation Errors
    float_errors = 0
    for idx, label in enumerate(test_labels):
        guess_label = np.argmax(float_labels[idx])
        actual_label = np.argmax(label)
        if (guess_label!=actual_label):
            float_errors += 1.
    fixed_errors = 0
    for idx, label in enumerate(test_labels):
        guess_label = np.argmax(fixed_labels[idx])
        actual_label = np.argmax(label)
        if (guess_label!=actual_label):
            fixed_errors += 1.

    # Produce stats
    print 'Min/Max of coefficient values [{}, {}]'.format(network.weightsT.min(), network.weightsT.max())
    print 'Min/Max of intersect values [{}, {}]'.format(network.biases.min(),network.biases.max())
    print 'Misclassifications (float) = {0:.2f}%'.format(float_errors/len(test_labels)*100)
    print 'Misclassifications (fixed) = {0:.2f}%'.format(fixed_errors/len(test_labels)*100)

    # Dump the model and test data
    np.save('test_data', test_data)
    np.save('test_labels', test_labels)
    np.save('model_weights', network.weightsT)
    np.save('model_offsets', network.biases)
    np.save('model_weights_fixed', weight)
    np.save('model_offsets_fixed', offset)
