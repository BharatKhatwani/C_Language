#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

   // printf("%p\n", &age);                              *ptr = value at address
    printf("%u\n", &age);

    printf("%u\n", ptr);
    printf("%p\n", &ptr);
    return 0;
}