#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_NUMBER 255
#define MIN_INPUT_NUMBER 0

void validate_number(unsigned int number)
{
    if (number < MAX_INPUT_NUMBER && number > MIN_INPUT_NUMBER)
    {
        return;
    }
    printf("There is an error in the number input process.");
    exit(1);
}

unsigned get_number()
{

    unsigned int num = 0;
    printf("Please enter a number from %d - %d: ", MIN_INPUT_NUMBER, MAX_INPUT_NUMBER);
    scanf("%u", &num); /* TODO replace with stdin */
    validate_number(num);
    /* printf("The current number input is: %d", num); */

    return num;
}
