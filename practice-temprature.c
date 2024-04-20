#include <stdio.h>
#include <ctype.h>

int main() {

  char unit;
  float temp;

  printf("\nEnter the temperature (C or F): ");
  scanf("%c", &unit);

  unit = toupper(unit); // convert to uppercase

  if (unit == 'C') {
    printf("\nEnter the temperature in C: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nTemperature in F: %.2f", temp);
  } else if (unit == 'F') {
    printf("\nEnter the temperature in F: ");
    scanf("%f", &temp);
    temp = (temp - 32) * 5 / 9;
    printf("\nTemperature in C: %.1f", temp); // .1f means 1 only shows 1 decimal
  }
  else {
    printf("\n %c Invalid unit",unit);
  }
  
  return 0;
}
