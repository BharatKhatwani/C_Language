#include<stdio.h>
void printPattern(int n);
int main(){
    int n=3;
    printPattern(n);//change the value of n for more star variables
    return 0;
}
// for n=3
// *
//***
//*****

void printPattern(int n){
    if (n==1){
    printf("*\n");
    return;
}
printPattern(n-1);
for(int i=0;i<(2*n-1);i++){
    printf("*");
}
printf("\n");
}