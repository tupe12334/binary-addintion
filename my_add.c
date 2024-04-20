#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int my_add(unsigned int a, unsigned int b)
{
    /* printf("\nGot inside with %d %d\n", a, b);*/
    unsigned int result = 0;
    unsigned int carrier = 0;
    unsigned int sum = 0;
    unsigned int power = 0;

    while (a > 0 || b > 0)
    {
        /* Get the first number of the binary int value */
        unsigned int a_rightmost_bit = a & 1;
        unsigned int b_rightmost_bit = b & 1;
        /*
            print_binary(result);
            printf("power: %d", power);
            printf("\n a_rightmost_bit %d", a_rightmost_bit);
            printf("\n b_rightmost_bit %d", b_rightmost_bit);
            printf("\n carrier %d", carrier);
        */

        sum = a_rightmost_bit + b_rightmost_bit + carrier;

        carrier = 0;
        /* printf("\n sum %d", sum); */
        switch (sum)
        {
        case 0:
            /* continue to the next iteration without any action */
            break;
        case 1:
            result += pow(2, power);
            break;
        case 2:
            carrier = 1;
            break;
        case 3:
            result += pow(2, power);
            carrier = 1;
            break;
        default:
            printf("\nThe program encounter unmanaged scenario.\n");
            exit(1);
            break;
        }

        /* printf("\nresult %d", result); */
        power++;
        a >>= 1;
        b >>= 1;
    }
    if (carrier == 1)
    {
        carrier = 0;
        result += pow(2, power);
    }

    return result;
}