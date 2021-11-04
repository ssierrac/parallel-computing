from time import time
import numpy as np
cimport numpy as cnp

cdef kernel(double zr, double zi, double cr, double ci, double lim, double cutoff):
    ''' Computes the number of iterations `n` such that 
        |z_n| > `lim`, where `z_n = z_{n-1}**2 + c`.
    '''
    cdef int count = 0
    while ((zr*zr + zi*zi) < (lim*lim)) and count < cutoff:
        zr, zi = zr * zr - zi * zi + cr, 2 * zr * zi + ci
        count += 1
    return count

cpdef compute_mandel(double cr, double ci, int N, double bound=1.5, double lim=1000., double cutoff=1e6):
    cdef cnp.ndarray[cnp.int_t, ndim=2] mandel
    mandel = np.empty((N, N), dtype=int)

    cdef cnp.ndarray[cnp.double_t, ndim=1] grid_x
    grid_x = np.linspace(-bound, bound, N)

    cdef double t0 = time()
    cdef Py_ssize_t i, j
    cdef double x, y

    for i, x in enumerate(grid_x):
        for j, y in enumerate(grid_x):
            mandel[i,j] = kernel(x, y, cr, ci, lim, cutoff)
    return mandel, time() - t0

