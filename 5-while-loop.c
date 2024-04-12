#include <stdio.h>

int main() {
  int init, directive = 0;
  while (init < 10) {
    init++;
  }
  printf("%d", init);

  // Loop directive
  while (1) {
    directive++;
    if (directive == 10) {
      break;
    }
  }
  return 0;
}
