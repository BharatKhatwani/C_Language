#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    
    srand(time(0));
     number = rand()%100 + 1;//generates random number between 1 and 100
    printf("The number is %d ", number);
    // keep running the loops until the number is gause
    return 0;
}   