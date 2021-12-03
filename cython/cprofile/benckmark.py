import timeit
from mandel_main import main as mandel


if __name__ == '__main__':

    time_python = timeit.timeit(stmt = lambda: mandel(), number = 30)
    time_cython = timeit.timeit(stmt = lambda: mandel('cyt'), number = 30)
    time_cython02 = timeit.timeit(stmt = lambda: mandel('cyt02'), number = 30)
    time_cython03 = timeit.timeit(stmt = lambda: mandel('cyt03'), number = 30)
    time_cython04 = timeit.timeit(stmt = lambda: mandel('cyt04'), number = 30)
    #time_cython05 = timeit.timeit(stmt = lambda: mandel('cyt05'), number = 30)

    print(f"Average time using python: {time_python}")
    print(f"Average time using cython: {time_cython}")
    print(f"Average time using cython02: {time_cython02}")
    print(f"Average time using cython03: {time_cython03}")
    print(f"Average time using cython04: {time_cython04}")
    #print(f"Average time using cython05: {time_cython05}")

    print(f"Python over Cython04 : {time_python/time_cython04}")
