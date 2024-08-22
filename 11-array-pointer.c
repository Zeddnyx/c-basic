#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[5] = {10, 20, 30, 40, 50}; 
  int *ptr = arr; // Pointer to the first element of the array

  printf("Address of arr[0]: %p\n", &arr[0]); // Address of the first element
  printf("Value of ptr: %p\n", ptr); // Pointer also points to the first element

  printf("Value at arr[0]: %d\n", arr[0]); // Access the first element directly
  printf("Value at ptr: %d\n", *ptr); // Access the first element via pointer

  // Accessing other elements using pointer arithmetic
  printf("Value at arr[1] using pointer: %d\n", *(ptr + 1)); // 20
  printf("Value at arr[2] using pointer: %d\n", *(ptr + 2)); // 30


  // // pointers to arrays
  // char vowels[] = {'A', 'E', 'I', 'O', 'U'};
  // char *pvowels = vowels;
  // int i;
  //
  // // Print the addresses
  // //   for (i = 0; i < 5; i++) {
  // //     printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i,
  // //            &vowels[i], i, pvowels + i, i, vowels + i);
  // //   }
  //
  // // Allocate memory to store five characters
  // int n = 5;
  // char *point = (char *)malloc(n * sizeof(char));
  // int index;
  //
  // point[0] = '1';
  // point[1] = '2';
  // *(point + 2) = '3';
  // *(point + 3) = '4';
  // *(point + 4) = '5';
  // for (index = 0; index < n; index++) {
  //   printf("%c \n", point[index]);
  // }
  //
  // printf("\n");
  // free(point);

  return 0;
}
