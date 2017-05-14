CC=gcc
CFLAGS=-c -Wall -Wextra


all: factor

factor: main.o algorithms.o
	$(CC) main.o algorithms.o -o factor && rm -r *.o

test: tests.o algorithms.o
	$(CC) tests.o algorithms.o -o test && rm -r *.o

main.o: main.c algorithms.h
	$(CC) $(CFLAGS) main.c

tests.o: tests.c algorithms.h
	$(CC) $(CFLAGS) tests.c

algorithms.o: algorithms.c algorithms.h
	$(CC) $(CFLAGS) algorithms.c

clean:
	rm -rf *.o factor test
