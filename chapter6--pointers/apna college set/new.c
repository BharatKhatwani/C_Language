#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    int (*ptr)[5];
    ptr = &arr;
    for (int i =0; i <5; i++){
        printf("%d",*(*ptr+i));

    }
    printf(" \n ");
    return 0;
}