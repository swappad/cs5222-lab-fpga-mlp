import numpy as np
from mnist import getDataSet, parse_args

test_data, test_label = getDataSet(parse_args(), 'test')

print(np.shape(test_data))
# Hallo test
non_zero = np.count_nonzero(test_data)

print(non_zero)

print(np.amax(test_data))


