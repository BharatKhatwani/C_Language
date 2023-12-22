#include<stdio.h>

int main(){
    FILE *ptr;
    // fgets demo for reading a file
    //ptr = fopen("getcdemo.txt", "r");
    //char c = fgetc(ptr);
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));

    ptr = fopen("putcdemo.txt", "w");
      
    putc('c', ptr);                         // jitna ye wali line uthna c word..
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}