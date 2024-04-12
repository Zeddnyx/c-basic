#include <stdio.h>

int foo(int bar) {
    return bar * 2;
}

int main() {
  printf("%d", foo(10));
  return 0;
}
