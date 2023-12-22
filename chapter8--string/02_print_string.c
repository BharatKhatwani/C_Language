#include<stdio.h>

int main(){
   // char str[] = {'B','h','a','r','a','t' ,  '\0'};
char str[] = "Bharat";
char *ptr = str;
while(*ptr!= '\0'){
    printf("%c", *ptr);
    ptr++;
}
    return 0;
}