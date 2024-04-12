#include <stdio.h>

// Integers - whole numbers which can be either positive or negative. Defined
// using char, int, short, long or long long. Unsigned integers - whole numbers
// which can only be positive. Defined using unsigned char, unsigned int,
// unsigned short, unsigned long or unsigned long long. Floating point numbers -
// real numbers (numbers with fractions). Defined using float and double.
// Structures - will be explained later, in the Structures section.

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
  int foo, bar = 1;
  BOOL baz = TRUE;
  foo = 40;
  printf("%d", bar + foo);
  return 0;
}
