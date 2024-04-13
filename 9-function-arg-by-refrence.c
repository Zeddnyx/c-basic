#include <stdio.h>

int foo(int bar) { return bar++; }
int fooPointer(int *bar) { return (*bar)++; }

int main() {

  int n;
  // printf("Before: %d\n", n);
  // foo(n);
  // printf("After: %d\n", n); // still 0
                            
  printf("Before : %d\n", n);
  fooPointer(&n);
  printf("After : %d\n", n); 

  return 0;
}
