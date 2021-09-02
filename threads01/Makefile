GCC = gcc
FLAGS = -ansi -std=c99 -pedantic -Wall -pthread
PROGRAM = main

main:
	$(GCC) $(FLAGS) matrix.c -c
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) $@.o matrix.c -o $@.out

clean:
	$(RM) *.o *.out
