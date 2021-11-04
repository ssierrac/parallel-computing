import timeit
from funcE import rbf_network
from funcEC import rbf_network as rbf_networkC
import numpy as np

D = 5
N = 1500
X = np.array([np.random.rand(N) for d in range(D)]).T
beta = np.random.rand(N)
tetha = 10


if __name__ == '__main__':

    time_python = timeit.timeit(stmt = lambda: rbf_network(X, beta, tetha), number = 5)
    time_cython = timeit.timeit(stmt = lambda: rbf_networkC(X, beta, tetha), number = 5)

    print(time_python)
    print(time_cython)
    print(time_python/time_cython)
