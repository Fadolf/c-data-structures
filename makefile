#VARIABLES
CC=gcc
CFLAGS= -Wall


all: data

data: main.o ListArray.o
	$(CC) $(CFLAGS) main.o ListArray.o -o data

main.o: main.c
	$(CC) $(CFLAGS) main.c

ListArray.o: ListArray.c
	$(CC) $(CFLAGS) ListArray.c

clean:
	rm *.o