import timeit

if __name__ == '__main__':
    setup_cython = 'from cython01 import prueba'
    setup_python = 'from python01 import prueba'
    code = 'prueba(100)'

    time_cython = timeit.timeit(setup=setup_cython, stmt = code, number = 1000)
    time_python = timeit.timeit(setup=setup_python, stmt = code, number = 1000)

    print(f"time python: {time_python}")
    print(f"time cython: {time_cython}")
    print(f"cython faster than python by {time_python/time_cython}")
