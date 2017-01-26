CFLAGS=-Wall --ansi

dado: main.o random.o
	gcc main.o random.o -o dado

main.o: main.c random.h
random.o: random.h

clean:
	rm -f *.o dado
