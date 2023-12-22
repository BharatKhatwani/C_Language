#include<stdio.h>

int main(){
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    // one liner 
 (a<5)?printf("number is smaller than five"): printf("number is larger than five");
    return 0;
}

//           : use because we cannot end statement ;