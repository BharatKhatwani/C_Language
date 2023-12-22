#include<stdio.h>

int main(){
    // float price = 100.00;                                                // value ke * ko yaad rakhna ha 
    // float *ptr = &price;                                                  // address ke liya & ko yaad rakhna ha 
    // float **pptr = &ptr;

int i =5;
int *ptr = &i;
int **pptr = &ptr;

printf("%d\n", **pptr);

    return 0;
}