#include<stdio.h>
int sum(int a, int b);
int main(){
    int a=4,b=7;       
    int c;
    c =a+b;                      // not neccesary to void in a function
    printf("The value of a and b is %d and %d\n" , a, b);           // functio n  type
    printf("The value of 4+7 is %d\n", sum(a,b));
    printf("The value of a and b after function cell is %d and %d\n",a,b);
printf("the value of c is %d\n",c);
    return 0;
}

int sum(int a, int b){
    int c;
    c = a+b;  // ye value a and b different ha or iske different call aayega; main value me depend krta ha 
    b = 3434;              // ye bas dekha ka hota ha 
    a = 23432;
    return c;
}


