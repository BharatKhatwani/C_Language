#include<stdio.h>                               // number number hi minus hota ha or // difference data type me aata ha !!
 
int main(){
    int age =22;
    int _age =23;
    int *ptr = &age;
int *_ptr = &_age;


printf("%u, difference = %u\n ", ptr-_ptr, ptr-_ptr);
_ptr = &age;
printf(" comparison = %u\n ", ptr==_ptr);

    return 0;
}