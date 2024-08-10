#include <stdio.h>
#include <time.h>

// Define BOOL as char
#define BOOL char
#define FALSE 0
#define TRUE 1

// Structure example
struct Person {
  char name[50];
  int age;
  float height;
};

void demonstrateTypesAndDateTime() {
  // Integer types
  char charVal = -128;
  int intVal = 32767;
  short shortVal = 32000;
  long longVal = 2147483647L;
  long long longLongVal = 9223372036854775807LL;

  // Unsigned integer types
  unsigned char ucharVal = 255; 
  unsigned int uintVal = 4294967295U; 
  unsigned short ushortVal = 65000;
  unsigned long ulongVal = 4294967295UL;
  unsigned long long ulongLongVal = 18446744073709551615ULL;

  // Floating point types
  float floatVal = 3.14f;
  double doubleVal = 3.141592653589793;

  // BOOL example
  BOOL boolVal = TRUE;

  // Print integer values
  printf("char: %d\n", charVal);
  printf("int: %d\n", intVal);
  printf("short: %d\n", shortVal);
  printf("long: %ld\n", longVal);
  printf("long long: %lld\n", longLongVal);

  // Print unsigned integer values
  printf("unsigned char: %u\n", ucharVal);
  printf("unsigned int: %u\n", uintVal);
  printf("unsigned short: %hu\n", ushortVal);
  printf("unsigned long: %lu\n", ulongVal);
  printf("unsigned long long: %llu\n", ulongLongVal);

  // Print floating point values
  printf("float: %.2f\n", floatVal);
  printf("double: %.15f\n", doubleVal);

  // Print BOOL value
  printf("BOOL: %d\n", boolVal);

  // Structure example
  struct Person person1;
  snprintf(person1.name, sizeof(person1.name), "Alice");
  person1.age = 30;
  person1.height = 5.5f;

  // Print structure values
  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("Height: %.1f\n", person1.height);

  // Current date and time
  time_t t;
  struct tm *tmp;
  char order_date[11]; // YYYY-MM-DD
  char start_time[6];  // HH:MM

  // Get the current time
  t = time(NULL);
  tmp = localtime(&t);

  // Format the date and time
  strftime(order_date, sizeof(order_date), "%Y-%m-%d", tmp);
  strftime(start_time, sizeof(start_time), "%H:%M", tmp);

  printf("Order date: %s\n", order_date);
  printf("Start time: %s\n", start_time);
}

int main() {
  demonstrateTypesAndDateTime();

  return 0;
}
