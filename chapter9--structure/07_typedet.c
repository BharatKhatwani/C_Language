#include<stdio.h>
#include <string.h>

typedef struct empolyee
{
    int code;
    float salary;
    char name[100];
}emp ;

void show(emp emp1){
    printf("The code of empolyee is : %d\n", emp1.code);
printf("The Salary of empolyee is :  %f\n", emp1.salary);
printf("The Name of empolyee is :  %s\n", emp1.name);

}



int main(){
    // declaration e1 and ptr
    emp e1;
    emp *ptr;
// pointing ptr to e1
    ptr = &e1;
   // set the member values for e1
   ptr->code = 101;
ptr->salary =11.01;
strcpy(ptr->name, "Bharat" );     

show (e1);
    return 0;
}