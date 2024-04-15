#include <stdio.h>

int foo(int bar) { return bar++; }
// func with pointer
int fooPointer(int *bar) { return (*bar)++; }

// Pointers to structures
typedef struct {
  char *name;
  int age;
} person;

void birthday(person *p) {
  p->age++; // This is the same..
  //(*p).age++; // ... as this would be
}

int main() {

  int n;
  // printf("Before: %d\n", n);
  // foo(n);
  // printf("After: %d\n", n); // still 0

  printf("Before : %d\n", n);
  fooPointer(&n);
  printf("After : %d\n", n);

  // Pointers to structures
  person me;
  me.name = "John";
  me.age = 27;
  birthday(&me);
  printf("%s is %d years old\n", me.name, me.age);

  return 0;
}
