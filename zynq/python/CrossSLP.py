import numpy as np
import itertools
from scipy.special import softmax as soft
import matplotlib
import matplotlib.pyplot as plt


class SLP():
    
    def __init__(self, input_nodes, output_nodes, iterations=1, learning_rate=0.01, alph=1, l1=1, args=0):
        self.weightsT = np.random.rand(output_nodes, input_nodes) - 1
        self.biases = np.random.rand(output_nodes) * 2 - 1
        self.input_nodes = input_nodes
        self.output_nodes = output_nodes
        self.iterations = iterations
        self.rate = learning_rate
        self.alph = alph
        self.l1 = l1
        self.args = args


    def selu(self, u_set):
        out = []
        for val in u_set:
            tmp = np.piecewise(val, [val >= 0, val < 0], [lambda val: self.l1 * self.alph * (np.exp(val) - 1), lambda val: self.alph * val])
            out.append(tmp)
        return out

    def deriv_selu(self, x):
        return np.piecewise(x, [x >= 0, x < 0], [self.l1 * self.alph, self.alph])

    def predict(self, X, debug=False):
        #u = np.add(np.transpose(np.dot(X, np.transpose(self.weightsT))), self.biases) 
        ones = np.ones(len(X)).reshape((len(X),1))
        i_p = np.append(ones, X, axis=1)
        i_p = np.divide(i_p, 256.0)
        w_p = np.append(self.biases.reshape(10,1), self.weightsT, axis=1)
        u = np.dot(i_p, w_p.T)
        u_selu = self.selu(u)
        y = soft(u_selu, axis=1)
        if(debug):
            print("u:", np.shape(u))
            print("u_selu:", np.shape(u_selu))
            print("y:", np.shape(y))
        if np.ndim(y) == 2 and np.shape(y)[0] == 1:
            return np.ndarray.flatten(np.asarray(u)), np.ndarray.flatten(np.asarray(y))
        else:
            return u, y


    def fit(self, x_set, t_set):
        i = 0
        data = []
        error = 0
        for ocean in range(self.iterations):
            for x, t in itertools.izip_longest(x_set, t_set):
                u, y = self.predict(np.reshape(x,(1, self.input_nodes)))
                if(self.args.errorplot and i % 100 == 0 ):
                    data.append(error)
                    error = 1 if(np.argmax(y) != np.argmax(t)) else 0
                elif(self.args.errorplot and np.argmax(y) != np.argmax(t)):
                    error += 1
                i += 1
                delta = np.subtract(y,t) * self.deriv_selu(u)
                self.biases = np.subtract(self.biases, self.rate * delta)
                for d, diff in enumerate(delta):
                    self.weightsT[d] = np.subtract(self.weightsT[d], self.rate * np.multiply(diff, x)) 
        if(self.args.errorplot):
            plt.plot(data)
            plt.savefig('errorplot.png')


# network = SLP(2,2,1, 2.0)
# x=[[1,2],[1,16],[11,3]]
# t=[[1,0],[1,0],[0,1]]
# y = network.predict(x)
# print(y)
# network.fit(x, t)
# y = network.predict(x)
# print(y)
