#include <stdio.h>
#include <string.h>
struct student 
{
    int roll;
    float cgpa;
    char name[10];
};
int main()
{
    // int a = 34;
    // char b = 'g';
    // float d = 234.3543;

    struct student s1;                      // not that s1 hi value krna ha to get result
    s1.roll = 100;
    s1.cgpa = 34.454;
    
    // e1.name = Harry;            --> wont work
    strcpy(s1.name, "Harry");

    printf("%d\n", s1.roll);
    printf("%f\n", s1.cgpa);
    printf("%s\n", s1.name);

    return 0;
}