CFLAGS=-Wall -ansi -pedantic

all: vettori1 vettori2

vettori1: vettori1.o
vettori1.o: vettori1.c

vettori2: vettori2.o
vettori2.o: vettori2.c

.PHONY: clean
clean:
	rm -rf *.o vettori1 vettori2
