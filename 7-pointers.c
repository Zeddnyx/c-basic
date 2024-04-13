// Whats is Pointers
// A pointer is essentially a simple integer variable which holds a memory
// address that points to a value, instead of holding the actual value itself.

// char * name = "John";

// It allocates a local (stack) variable called name, which is a pointer to a
// single character. It causes the string "John" to appear somewhere in the
// program memory (after it is compiled and executed, of course). It initializes
// the name argument to point to where the J character resides at (which is
// followed by the rest of the string in the memory). If we try to access the
// name variable as an array, it will work, and will return the ordinal value of
// the character J, since the name variable actually points exactly to the
// beginning of the string.

// +++++ Dereferencing
// Dereferencing is the act of referring to where the pointer points,
// instead of the memory address. We are already using dereferencing in arrays -
// but we just didn't know it yet. The brackets operator - [0] for example,
// accesses the first item of the array. And since arrays are actually pointers,
// accessing the first item in the array is the same as dereferencing a pointer.
// Dereferencing a pointer is done using the asterisk operator *.

#include <stdio.h>

int main() {
  int a = 1;
  int *pointer_to_a = &a; // use & to get the address of the variable

  /* let's change the variable a */
  a += 1;

  /* we just changed the variable again! */
  *pointer_to_a += 1;

  /* will print out 3 */
  printf("The value of a is now %d\n", a);

  return 0;
}
