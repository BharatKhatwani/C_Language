#include<stdio.h>
#include <string.h>
struct student {
    int roll;
    float cgpa ;
    char name;
};
int main(){
    struct student s1 = {1664, 9.2 , "bharat"};
    printf("student roll = %d\n ", s1.roll);

    struct student *ptr = &s1;
    printf("student roll = %d\n",(*ptr));
    return 0;
}