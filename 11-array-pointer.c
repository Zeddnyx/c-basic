#include <stdio.h>
#include <stdlib.h>

int main() {
  // pointers to arrays
  char vowels[] = {'A', 'E', 'I', 'O', 'U'};
  char *pvowels = vowels;
  int i;

  // Print the addresses
  //   for (i = 0; i < 5; i++) {
  //     printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i,
  //            &vowels[i], i, pvowels + i, i, vowels + i);
  //   }

  // Allocate memory to store five characters
  int n = 5;
  char *point = (char *)malloc(n * sizeof(char));
  int index;

  point[0] = '1';
  point[1] = '2';
  *(point + 2) = '3';
  *(point + 3) = '4';
  *(point + 4) = '5';
  for (index = 0; index < n; index++) {
    printf("%c \n", point[index]);
  }

  printf("\n");
  free(point);

  return 0;
}
