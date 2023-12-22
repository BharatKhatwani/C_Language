#include<stdio.h>

int main(){                                                         
// int i=1;                                                            for loops
// while(i<=5){                                                     for (i=1;i<=5;i++){                                              
//     printf("hello world\n");                                        printf("hello world");
//     i++;
// }
   // 02 question 
   int n;
   printf("enter number : ");                           // number phle printf scanf use krna ha 
   scanf("%d", &n);

   int i=0; 
   while(i <=n){ 
    printf("%d\n" ,i);
    i++;
   }
    return 0;
}