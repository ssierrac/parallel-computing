from setuptools import Extension, setup
from Cython.Build import cythonize
import numpy

extensions = [
    Extension("mandel_cyt", 
        ["mandel_cyt.pyx"],
    ),
    Extension("mandel_cyt02", 
        ["mandel_cyt02.pyx"],
    ),
    Extension("mandel_cyt03", 
        ["mandel_cyt03.pyx"],
    ),
    Extension("mandel_cyt04", 
        ["mandel_cyt04.pyx"],
    ),
    Extension("mandel_cyt05", 
        ["mandel_cyt05.pyx"],
    )
]

setup(
    name="mandel_cyt",
    ext_modules=cythonize(
        extensions,
        compiler_directives={'language_level' : "3"},
        include_path=[numpy.get_include()],
        annotate=True
        ),
)
