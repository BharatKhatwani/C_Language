#include <stdio.h>

struct Person {
  char name[20];
  int age;
  char address[50];
};

int main() {
  struct Person person1 = {"John", 25, "123 Main St"};
  struct Person* ptr = &person1;

  // Accessing structure members using the arrow operator
  printf("Name: %s\n", ptr->name);
  printf("Age: %d\n", ptr->age);
  printf("Address: %s\n", ptr->address);

  // Modifying structure members using the arrow operator
  ptr->age = 30;
  printf("New age: %d\n", ptr->age);

  return 0;
}
