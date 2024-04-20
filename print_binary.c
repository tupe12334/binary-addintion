#include <stdio.h>

void print_binary(int num)
{
    int i = 0;

    /* Loop through each bit position (assuming 32-bit int) */
    for (i = 31; i >= 0; i--)
    {
        /* Check if the bit is set using bitwise AND with 1 << */
        (num & (1 << i)) ? printf("1") : printf("0");
    }
    printf("\n");
}
