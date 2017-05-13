CC=gcc
CFLAGS=-c -Wall -Wextra


all: factor

factor: main.o algorithms.o
	$(CC) main.o algorithms.o -o factor && rm -r *.o

main.o: main.c algorithms.h
	$(CC) $(CFLAGS) main.c

algorithms.o: algorithms.c algorithms.h
	$(CC) $(CFLAGS) algorithms.c

clean:
	rm -rf *.o factor
