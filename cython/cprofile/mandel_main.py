import numpy as np
import matplotlib.pyplot as plt
import sys
from mandel import compute_mandel as compute_mandel_py
try:
    from mandel_cyt import compute_mandel as compute_mandel_cyt
    from mandel_cyt02 import compute_mandel as compute_mandel_cyt02
    from mandel_cyt03 import compute_mandel as compute_mandel_cyt03
    from mandel_cyt04 import compute_mandel as compute_mandel_cyt04
    from mandel_cyt05 import compute_mandel as compute_mandel_cyt05
except ImportError as e:
    print(e)

def plot_mandel(mandel):
    plt.imshow(mandel)
    plt.axis('off')
    plt.show()


def set_version(version='py'):
    mandel_func = None
    try:
        if version == 'py':
            print("Using pure Python")
            mandel_func = compute_mandel_py
        elif version == 'cyt': 
            print("Using Cython")
            mandel_func = compute_mandel_cyt
        elif version == 'cyt02': 
            print("Using Cython02")
            mandel_func = compute_mandel_cyt02
        elif version == 'cyt03': 
            print("Using Cython03")
            mandel_func = compute_mandel_cyt03
        elif version == 'cyt04': 
            print("Using Cython04")
            mandel_func = compute_mandel_cyt04
        elif version == 'cyt05': 
            print("Using Cython05")
            mandel_func = compute_mandel_cyt05

    except NameError as ex:
        raise RuntimeError("Cython extension missing") from ex


    return mandel_func


def main(version='py'):
    kwargs = dict(cr=0.285, ci=0.01,
                  N=200,
                  bound=1.5)

    mandel_func = set_version(version)
    # choose pure Python or Cython version
    mandel_set, runtime = mandel_func(**kwargs)
    return mandel_set, runtime
    
if __name__ == '__main__':
    if len(sys.argv) == 2:
        mandel_set, runtime = main(sys.argv[1])
    else:
        mandel_set, runtime = main()
    print('Mandelbrot set generated in {0:5.2f} seconds'.format(runtime))
    plot_mandel(mandel_set)
