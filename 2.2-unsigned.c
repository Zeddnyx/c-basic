#include <stdio.h>

int main() {
  // Can hold zero, and positive integers but it is not allowed to store or
  // hold negative values.
  int num = 29;
  int num2 = -29;
  unsigned int unum = (unsigned int)num;
  unsigned int unum2 = (unsigned int)num2;

  printf("%d\n", num);
  printf("%u\n\n", unum);

  printf("%d\n", num2);
  printf("negative %u", unum);

  return 0;
}

// #What are the advantages of using unsigned int?
// Unsigned int is useful when working with variables that represent quantities
// that should never be negative, such as the size of an array or the index of
// an element in an array. It also allows for a larger range of positive values
// compared to a regular int.
//
// #What is the range of values an unsigned int can hold?
// An unsigned int can hold values from 0 to 2^n – 1,
// where n is the number of bits used to represent the unsigned int on a particular system. 
// For example, a 16-bit unsigned int can hold values from 0 to 65535.
