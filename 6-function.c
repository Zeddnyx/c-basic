#include <stdio.h>
// There are 2 types func GLobal and Static

// global is accessible from anywhere even outside the file
int foo(int bar) {
    return bar * 2;
}

// static is only accessible from within the file
static void fun(void) {
   printf("\nI am a static function.");
}


int main() {
  printf("%d", foo(10));
  fun();
  return 0;
}
