from distutils.core import setup
from distutils.extension import Extension
from Cython.Build import cythonize
from Cython.Distutils import build_ext

ext_modules = [Extension("funcEC", ["funcEC.pyx"], libraries=["m"], extra_compile_args=["-ffast-math"])]

setup(name = "funcEC",
        cmdclass={'build_ext': build_ext},
        ext_modules=ext_modules)

from setuptools import setup
from Cython.Build import cythonize

#setup(
#   ext_modules = cythonize("funcEC.pyx")
#)
