from setuptools import setup
from Cython.Build import cythonize

setup(
        name = 'first cython appp',
        ext_modules=cythonize([
            "primes.pyx",
            "primes_python_compiled.py"
            ]),
    )
