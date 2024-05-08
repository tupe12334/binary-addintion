#include "get_number.h"
#include "print_binary.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int my_add(unsigned int a, unsigned int b);

int main() {
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

unsigned int my_add(unsigned int a, unsigned int b) {
  unsigned int result = 0;
  unsigned int carrier = 0;
  unsigned int sum = 0;
  unsigned int power = 0;

  while (a > 0 || b > 0) {
    /* Get the first number of the binary int value */
    unsigned int a_rightmost_bit = a & 1;
    unsigned int b_rightmost_bit = b & 1;

    sum = a_rightmost_bit + b_rightmost_bit + carrier;

    carrier = 0;
    switch (sum) {
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

    power++;
    a >>= 1;
    b >>= 1;
  }
  if (carrier == 1) {
    carrier = 0;
    result += pow(2, power);
  }

  return result;
}