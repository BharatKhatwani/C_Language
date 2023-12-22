#include<stdio.h>
#include <string.h>

struct empolyee
{
    int code;
    float salary;
    char name[100];
};

int main(){
     struct empolyee bharat = {100,34.23,"Bharat"};       // for prionting zero in three name answer should bhi zero
    //  struct empolyee bharat = {    0      };
    printf("code is   : %d\n", bharat.code);
     printf("salary is : %f\n ", bharat.salary);
      printf("Name is  : %s \n ", bharat.name);
    return 0;
}