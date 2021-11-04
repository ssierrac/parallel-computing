from setuptools import setup
from Cython.Build import cythonize

setup(
        name = 'first cython app',
        ext_modules=cythonize("cython01.pyx")
    )
