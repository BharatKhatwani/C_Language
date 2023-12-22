#include <stdio.h>

struct student {
   char name[50];
   int roll_no;
   float marks;
};

void display(struct student s) {
   printf("Name: %s\n", s.name);
   printf("Roll No: %d\n", s.roll_no);
   printf("Marks: %.2f\n", s.marks);
}

int main() {
   struct student s1 = {"John", 101, 85.5};
   display(s1);
   return 0;
}
