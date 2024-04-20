#include <stdio.h>
#include <string.h>

int main() {

  char name[20];

  printf("Enter your name: ");
  fgets(name, 20, stdin); // input with spaces (will add a new line if use space when input)
  name[strlen(name) - 1] = '\0'; // remove the new line

  printf("Hello, %s!\n", name);
  
  return 0;
}
