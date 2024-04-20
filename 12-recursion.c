#include <stdio.h>

// recurion is when a function calls itself
unsigned int multiply(unsigned int x, unsigned int y) {
  // must have terminating case
  if (x == 1) {
    return y;
  } else if (x > 1) {
    return y + multiply(x - 1, y);
    // so y is 5 and x is 3 
    // and this statement is loop 3 times then y is 5+5+5 = 15
  }

  /* Catch scenario when x is zero */
  return 0;
}

int main() {
  int x = 3, y = 5;
  printf("%d times %d is %d", x, y, multiply(x, y));
  return 0;
}
