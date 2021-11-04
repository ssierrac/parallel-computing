from time import time
import numpy
cimport numpy as cnp
cimport cython

cdef int kernel(double zr, double zi, double cr, double ci, double lim, double cutoff):
    ''' Computes the number of iterations `n` such that 
        |z_n| > `lim`, where `z_n = z_{n-1}**2 + c`.
    '''
    cdef int count = 0
    while ((zr*zr + zi*zi) < (lim*lim)) and count < cutoff:
        zr, zi = zr * zr - zi * zi + cr, 2 * zr * zi + ci
        count += 1
    return count


@cython.boundscheck(False)  # Deactivate bounds checking
@cython.wraparound(False)   # Deactivate negative indexing.
cpdef compute_mandel(double cr, double ci, int N, double bound=1.5, double lim=1000., double cutoff=1e6):
    cdef cnp.ndarray[cnp.int_t, ndim=2] mandel
    mandel = numpy.empty((N, N), dtype=numpy.int_)

    cdef cnp.ndarray[cnp.double_t, ndim=1] grid_x
    grid_x = numpy.linspace(-bound, bound, N, dtype=numpy.double)

    cdef double t0 = time()
    cdef Py_ssize_t i, j
    cdef double x, y

    for i in range(N):
        x = grid_x[i]
        for j in range(N):
            y = grid_x[j]
            mandel[i,j] = kernel(x, y, cr, ci, lim, cutoff)

    return mandel, time() - t0

