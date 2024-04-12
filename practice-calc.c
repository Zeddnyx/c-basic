#include <stdio.h>

int main() {
  int init, second, result;
  char operator;

  printf("Enter a number: ");
  scanf("%d", &init);
  printf("Enter number again: ");
  scanf("%d", &second);
  printf("Enter operator");
  scanf("%d", &operator);

  if (operator) {
    result = init + second;
    printf("%d", result);
  }
  return 0;
}
