#include<stdio.h>

int main(){
    int age =22;                      //   pointer me value kesa  print kare
    int *ptr =&age;

// value
printf("%d\n",age);
printf("%d\n",*ptr);
printf("%d\n",*(&age));

    return 0;
}