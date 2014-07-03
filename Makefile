CC=gcc
CFLAGS=-g -Wall -Wextra -pedantic
LDFLAGS=-lm -lcrypto

all: objects
	$(CC) $(LDFLAGS) $(CFLAGS) src/*.o -o brbuni

objects:
	cd src && make all && cd ..

clean:
	rm -f brbuni src/*.o
