from setuptools import setup
from Cython.Build import cythonize

setup(
        name = 'first cython appp',
        ext_modules=cythonize("cython01.pyx")
    )
