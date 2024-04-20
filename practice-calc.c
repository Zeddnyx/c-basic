#include <stdio.h>

int main() {
  double init, second, result;
  char operator;

  printf("Enter operator (+ - * /): ");
  scanf("%c", &operator);

  printf("Enter first number : ");
  scanf("%lf", &init);

  printf("Enter second number: ");
  scanf("%lf", &second);

  switch (operator) {
  case '+':
    result = init + second;
    printf("Result: %.2lf", result);
    break;
  case '-':
    result = init - second;
    printf("Result: %.2lf", result);
    break;
  case '*':
    result = init * second;
    printf("Result: %.2lf", result);
    break;
  case '/':
    result = init / second;
    printf("Result: %.2lf", result);
    break;
  default:
    printf("Error! operator is not correct");
    break;
  }

  return 0;
}
