#include<stdio.h>

int main(){
    printf("enter the number :");
    int n;
    scanf("%d\n");
    int fibo[n];

    fibo[0] = 0;
    fibo[1] = 1; 
    for(int i =2; i <n; i++){
       fibo[i] = fibo[i-1]+ fibo[i-2]; 
       printf("%d\t", fibo[i]);
    }
    printf("\n");
    return 0;
}