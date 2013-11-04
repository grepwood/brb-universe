CC=gcc
CFLAGS=-g -Wall -Wextra -pedantic -std=gnu99
LDFLAGS=-lm

all: objects
	$(CC) $(LDFLAGS) $(CFLAGS) src/*.o -o bu

objects:
	cd src && make all && cd ..

clean:
	rm -f bu src/*.o
