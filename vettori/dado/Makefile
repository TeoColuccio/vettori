CFLAGS=-Wall --ansi

guess: main.o dado.o random.o
	gcc main.o dado.o random.o -o dado

main.o: main.c dado.h
dado.o: dado.c dado.h random.h
random.o: random.h

clean:
	rm -f *.o dado
