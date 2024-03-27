all: main

main: my_add.o get_number.o
	gcc -ansi -pedantic -Wall -o main.out my_add.o get_number.o

get_number: get_number.c get_number.h
	gcc -ansi -pedantic -Wall -c get_number.c

my_add: my_add.c get_number.h 
	gcc -ansi -pedantic -Wall -c my_add.c

