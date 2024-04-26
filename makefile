CC=gcc
CFLAGS= -ansi -pedantic -Wall
all: main

main: my_add.o
	$(CC) $(CFLAGS) -o my_add.out my_add.o get_number.o print_binary.o  -lm

my_add.o: my_add.c get_number.o print_binary.o
	$(CC) $(CFLAGS) -c my_add.c

get_number.o: get_number.c get_number.h
	$(CC) $(CFLAGS) -c get_number.c

print_binary.o: print_binary.c print_binary.h
	$(CC) $(CFLAGS) -c print_binary.c

clean:
	rm -rf **.o