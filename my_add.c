#include <stdio.h>
#include <stdlib.h>
#include "get_number.h"

num_to_bin_string(int num)
{
    while (num > 0)
    {
        printf("%d \n", num >> 1);
        // Take out the right sided binary digit
        num >>= 1;
    }

    // 1 - 0001 >> 0
    // 2 - 0010 >> 1
    // 3 - 0011 >> 1
    // 4 - 0100 >> 2
    // 5 - 0101
    // 6 - 0110 >> 3
    // 7 - 0111
    // 8 - 1000
}

int main()
{
    int numb1, numb2;

    printf("Welcome to Ofek's task 11-a in the OpenU of Israel. \n");
    num_to_bin_string(4);
    // numb1 = get_number();
    // numb2 = get_number();

    return 0;
}
