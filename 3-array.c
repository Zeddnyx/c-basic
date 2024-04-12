#include <stdio.h>

int numbers[10];

int main() {
  /* populate the array */
  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  numbers[4] = 50;
  numbers[5] = 60;
  numbers[6] = 70;
  int average = (numbers[0] + numbers[1] + numbers[2]) / 3;

  printf("The 7th number in the array is %d and the average is %d", numbers[6],
         average);
  return 0;
}
