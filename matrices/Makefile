GCC = gcc
FLAGS = -ansi -std=c99 -pedantic -Wall
CFLAG = -lm
PROGRAMS = matrixAPP

matrixAPP:
	$(GCC) $(FLAGS) matrixUtils/matrixUtils.c -c -o matrixUtils/matrixUtils.o
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) -o $@.out $@.o matrixUtils/matrixUtils.o

clean:
	$(RM) $(PROGRAMS) *.o *.out */*.o
