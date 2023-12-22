#include<stdio.h>
void printAddress(int n);

int main(){
    int n =4;
    printAddress(n);
     printf("address of n is : %u\n" , &n);
    return 0;
}

void printAddress(int n){
    printf("address of n is : %u\n" , &n);
}

// call by refence me address same hoti h 
// call by call me value/address different hoti h 