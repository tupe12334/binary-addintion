#include <stdio.h>
#include "print_binary.h"
#include "get_number.h"
#include "my_add.h"

int main()
{
    unsigned int numb1, numb2;
    unsigned int result;

    printf("Welcome to Ofek's task 11-A in the Open University of Israel. \n");

    numb1 = get_number();
    numb2 = get_number();

    printf("Finish taking numbers successfully\n");

    result = my_add(numb1, numb2);

    printf("First number:\n");
    print_binary(numb1);
    printf("Second number:\n");
    print_binary(numb2);
    printf("Result:\n");
    print_binary(result);

    printf("\nThe result of the addition is: %d\n", result);

    return 0;
}