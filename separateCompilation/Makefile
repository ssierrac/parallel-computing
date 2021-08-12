GCC = gcc 
FLAGS = -ansi -pedantic -Wall
CFLAGS = -lm
PROGRAMS = sumaAPP


sumaAPP:
	$(GCC) $(FLAGS) funcionsuma.c -c
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) -o $@.out $@.o funcionsuma.o

clean:
	$(RM) $(PROGRAMS) *.o
	$(RM) $(PROGRAMS) *.out
