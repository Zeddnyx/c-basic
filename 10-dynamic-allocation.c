// Dynamic allocation of memory is a very important subject in C.
// It allows building complex data structures such as linked lists.
// Allocating memory dynamically helps us to store data without initially
// knowing the size of the data in the time we wrote the program.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char *name;
  int age;
} person;

int main() {
  // allocate a new person in the me argument
  person *me = (person *)malloc(sizeof(person));
  me->name = "John";
  me->age = 27;
  printf("%s is %d years old", me->name, me->age);
  free(me); // realease the data that points to me variable

  me->name = "asep"; // allocate new data using me
  printf("\n%s", me->name);

  // Note that the free does not delete the me variable itself,
  // it simply releases the data that it points to.
  // The me variable will still point to somewhere in the memory - but after
  // calling me we are not allowed to access that area anymore. We must not use
  // that pointer again until we allocate new data using it. like:  me->name =
  // "asep";

  // practice
  typedef struct {
    int x;
    int y;
  } point;

  point *p = NULL;
  p = (point *)malloc(sizeof(point));
  p->x = 10;
  p->y = 20;
  printf("\npoint p is %d", p->x);

  return 0;
}
