#include<stdio.h>

int main(){
    int marks[3];
    printf("Enter physics marks\n ");
    scanf("%d",&marks[0]);

     printf("Enter maths marks\n ");
    scanf("%d",&marks[1]);

     printf("Enter chemistry marks\n ");
    scanf("%d",&marks[2]);
    printf("physics = %d,chemistry = %d,maths = %d",marks[0],marks[1],marks[2]);
    return 0;
}