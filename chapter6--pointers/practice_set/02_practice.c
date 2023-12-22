#include<stdio.h>
void printAdd(int a){
    printf("The address of variables a is %u\n", &a);
}
int main(){
int i =4;
    printf("The value of varibles a is %u\n", i);                                       
printAdd(i);
printf("The address of varibles a is %u\n", &i);
    return 0;
}