#include<stdio.h>

int main(){
    int marks[2][3];
    marks[0][0] = 34;
    marks[0][1] = 56;
    marks[0][2] = 67;

    marks[1][0] =78 ;
    marks[1][1] = 16;
    marks[1][2] = 67;
    printf("%d\n",marks[1][1]);
    return 0;
}