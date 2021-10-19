# classic python

cpdef int prueba(int x):
    cdef int i
    cdef int y = 0 

    for i in range(x):
        y += i

    return y

if __name__ == '__main__':
    prueba(4)
