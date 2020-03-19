import numpy as np
import itertools
from scipy.special import softmax as soft


class SLP():
    
    def __init__(self, input_nodes, output_nodes, softmax_constant=1, learning_rate=0.01):
        self.weightsT = np.random.rand(output_nodes, input_nodes) - 1
        self.biases = np.random.rand(output_nodes) * 2 - 1
        self.input_nodes = input_nodes
        self.output_nodes = output_nodes
        self.c = softmax_constant
        self.rate = learning_rate

    def softmax(self, u_set):
        out = []
        for u in u_set:
            tmp = []
            for val in u:
                tmp.append(1 / sum(np.exp(self.c * (u - val)))) # should already contain the 1 in the denomenator
            out.append(tmp)
        return out

    def predict(self, X):
        #u = np.add(np.transpose(np.dot(X, np.transpose(self.weightsT))), self.biases) 
        ones = np.ones(len(X)).reshape((len(X),1))
        i_p = np.append(ones, X, axis=1)
        w_p = np.append(self.biases.reshape(10,1), self.weightsT, axis=1)
        u = np.dot(i_p, w_p.T)
        y = soft(u, axis=1)
        if np.ndim(y) ==2 and np.shape(y)[0] == 1:
            return np.ndarray.flatten(y)
        else:
            return y


    def fit(self, x_set, t_set):
        for x, t in itertools.izip_longest(x_set, t_set):
            y = self.predict(np.reshape(x,(1, self.input_nodes)))
            delta = np.subtract(y,t) * self.c
            self.biases = np.subtract(self.biases, self.rate * delta)
            for d, diff in enumerate(delta):
                self.weightsT[d] = np.subtract(self.weightsT[d], self.rate * np.multiply(diff, x)) 


# network = SLP(2,2,1, 2.0)
# x=[[1,2],[1,16],[11,3]]
# t=[[1,0],[1,0],[0,1]]
# y = network.predict(x)
# print(y)
# network.fit(x, t)
# y = network.predict(x)
# print(y)
