#cython: language_level=3
from math import exp
import numpy as np

cpdef rbf_network(double [:, :] X, double [:] beta, double tetha):
    cdef int N = X.shape[0]
    cdef int D = X.shape[1]
    cdef double [:] Y = np.zeros(N)
    cdef int i, j, d
    cdef double r = 0.0

    for i in range(N):
        for j in range(N):
            r = 0.0
            for d in range(D):
                r += (X[j, d] - X[i, d])**2
            r = r**0.5
            Y[i] += beta[j] * exp(-(r*tetha)**2)
    return Y
