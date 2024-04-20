CC=gcc
CFLAGS= -ansi -pedantic -Wall
all: main

main: my_add.o get_number.o print_binary.o
	$(CC) $(CFLAGS) -o main.out my_add.o get_number.o print_binary.o  -lm

get_number.o: get_number.c get_number.h
	$(CC) $(CFLAGS) -c get_number.c

my_add.o: my_add.c get_number.h print_binary.h
	$(CC) $(CFLAGS) -c my_add.c

print_binary.o: print_binary.c print_binary.h
	$(CC) $(CFLAGS) -c print_binary.c

clean:
	rm -rf **.o, **.out