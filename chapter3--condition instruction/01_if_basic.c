#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the number\n ");
    scanf("%d",&a);
    if(a%2==0){
        printf("it is even number",a);
    }
else{
    printf("It is odd number",a);
}
    return 0;
}