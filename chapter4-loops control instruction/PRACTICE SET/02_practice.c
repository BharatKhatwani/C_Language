#include<stdio.h>

int main(){
    // printf("*****Multiplication table of 10\n\n");
    // for(int i =50;i;i--){
        
    //     printf("50 x %d = %d\n", i, 50*i);
    // }

    int n;
    printf("enter number : ");
    scanf("%d", &n);

    // for (int i =1; i<=10; i++){
    //     printf("%d\n", n*i);
    // }

for(int i=10; i>=1; i--){                // for reverse order multiplication
    printf("%d\n", n* i);
}

    return 0;
}

//in first question multiplicity me error cpu hot hota ha ....