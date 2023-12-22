#include<stdio.h>
// int sum(int a, int b);
// int main(){
//     int a,b;
//     printf("enter first number :");
//     scanf("%d", &a);
//     printf("enter second number :");
//     scanf("%d", &b);

//     int s = sum(a,b);
//     printf("sum is : %d\n", s);
//     return 0;
// }

// int sum(int x, int y){
//     return x+y;
// }

int sum(int a, int b);
void printTable(int n);
int main(){
    int n;
    printf("enter  number :");
    scanf("%d", &n);
    printTable(n);  // argument/ actual parameter 
    
    return 0;
} 
int sum(int x, int y){
    return x + y;
}

void printTable(int n){ // parameter / formal parameter 
for (int i =1; i<=10; i++){
    printf("%d\n", i*n);
}
}
