import numpy as np
from mnist import getDataSet, parse_args
from scipy.sparse import coo_matrix

test_data, test_label = getDataSet(parse_args(), 'test')

# Hallo test
non_zero = np.count_nonzero(test_data[1])

print(non_zero)


#for img in test_data:

set_compressed = []
size = 0
for img in test_data:
    mat_coo = coo_matrix(img)
    row = mat_coo.row
    col = mat_coo.col
    data = mat_coo.data
    compressed = []
    compressed.append(col)
    compressed.append(data)

    array = np.array(compressed)
    array = array.T
    if array[-1][0] != 255 :
        array = np.append(array, [[255, 0]], axis=0)
    size += np.prod(np.shape(array))    
    set_compressed.append(array)

print(size)
print(set_compressed[100])


