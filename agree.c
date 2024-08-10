#include <stdio.h>

int main() {
  char answer = printf("do u agree? ");
  scanf("%c", &answer);
  printf("your answer %c", answer);

  return 0;
}
