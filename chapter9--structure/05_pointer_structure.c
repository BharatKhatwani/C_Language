#include<stdio.h>
#include <string.h>

struct empolyee
{
    int code;
    float salary;
    char name[100];
};

int main(){
    struct empolyee e1;
    struct empolyee *ptr;

    ptr = &e1;
   (*ptr).code = 101;  
   (*ptr).salary= 5000000;
             //  or you can also  write : ptr->code =101;
  // ptr->code = 101;
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    return 0;
}