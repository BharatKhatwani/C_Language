#include<stdio.h>

int main(){
    int marks [2][3];
    marks[0][0]  = 90;
    marks[0][1] = 67;
    marks[0][2] =45;

    
    marks[1][0]  = 70;
    marks[1][1] = 76;
    marks[1][2] =85;

    printf("%d", marks[0][0]);

    return 0;
}