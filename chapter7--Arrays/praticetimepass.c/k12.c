#include<stdio.h>

int main(){
    char str[100] ;
   // gets(str);
   fgets(str,20,stdin);
    puts(str);
    return 0;
}