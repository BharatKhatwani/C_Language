#include<stdio.h>

int main(){
    int a = 6; 
    int *ptr;
    ptr = &a;
    printf("The address of varibles a is %u\n", ptr);                                       //part one
printf("The address of varibles a is %d\n",*ptr);                                       
printf("The address of varibles a is %d\n",*ptr);
    return 0;
}