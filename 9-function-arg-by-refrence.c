#include <stdio.h>

// Pointers to structures
typedef struct {
  char *name;
  int age;
} person;

void birthday(person *p) {
  p->age++; // This modifies the original person object
  //(*p).age++; // another way to do it
}

void birthday2(person p) {
  p.age++; // this modifies a copy of the person obj
  printf("from birthday2\n");
  printf("%s2 is %d years old\n\n", p.name, p.age);

}

int main() {

  // Pointers to structures
  person me;
  me.name = "John";
  me.age = 27;

  birthday2(me); // it did not change to original value of me
  printf("%s2 is %d years old\n", me.name, me.age);
  birthday(&me); // it will change to original value of me
  printf("%s is %d years old\n", me.name, me.age);

  return 0;
}
