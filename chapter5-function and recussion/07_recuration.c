#include<stdio.h>
int factorial(int n){
    if (n==0){   // base case
        return 1;   
    }
    else {
        return  n * factorial (n-1);
    }
}
int main(){
     int n = (5);
    int fact =  factorial (n);
    printf("factorial the value of %d is %d\n",n , fact);
    
    return 0;
}



