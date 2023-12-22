#include<stdio.h>  // keep taking number as input from user until user enters an odd number
int main(){           // we mostly prefer do while loops
  int n;
    do{
        printf("Enter number :");
scanf("%d", &n);
printf("%d\n", n);

// if(n % 2 !=0)
if(n %7 ==0)                // q2 multiple of jab tak enter na ho
{
    break;
}

    }while(1);
    printf("thank you");
    return 0;
}