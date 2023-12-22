#include<stdio.h>
#include <string.h>

struct empolyee
{
    int code;
    float salary;
    char name[100];
};
void show(struct empolyee emp){
    printf("The code of empolyee is : %d\n", emp.code);
printf("The Salary of empolyee is :  %f\n", emp.salary);
printf("The Name of empolyee is :  %s\n", emp.name);
//emp.code =34;
}
int main(){
    struct empolyee e1;
    struct empolyee *ptr;

    ptr = &e1;
    // (*ptr).code = 101;            //  or you can also  write : ptr->code =101;
   ptr->code = 101;
ptr->salary =11.01;
strcpy(ptr->name, "Bharat" );                                       // 14 or 27 line ka (\\) ke baad me hum code of empolyee 101 print hoga 

    show(e1);
  //  printf("The code of empolyee is : %d\n", e1.code);
    return 0;
}