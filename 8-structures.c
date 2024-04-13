// C structures are special, large variables which contain several named
// variables inside. Structures are the basic foundation for objects and classes
// in C. Structures are used for:

// - Serialization of data
// - Passing multiple arguments in and out of functions through a single
// argument
// - Data structures such as linked lists, binary trees, and more

#include <stdio.h>

int some(int arg) {
  printf("%d", arg);
  return 0;
}

int main() {
  struct point {
    int x;
    int y;
  };

  struct point p;
  p.x = 10;
  p.y = 20;
  some(p.x);

  // Typedefs
  // Typedefs allow us to define types with a different name - which can come in handy when dealing with structs and pointers. 
  // In this case, we'd want to get rid of the long definition of a point structure. 
  // We can use the following syntax to remove the struct keyword from each time we want to define a new point:
  typedef struct {
    char *brand;
    int model;
  } vehicle;
  vehicle myCar = {"Toyota", 2020};
  vehicle myCar2;
  myCar2.brand = "Toyota";
  myCar2.model = 2020;
  printf("%s", myCar2.brand);

  return 0;
}
