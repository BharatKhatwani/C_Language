#include<stdio.h>                            // question sum of first n natural number second way of question 2

int main(){ 
    int n;
    printf("Enter number :");
    scanf("%d", &n);

int sum =0;                        // for loops me i ki value i tak hi rhti ha uske bad nhi kya krna ha compare ko
for(int i=1, j=n; i<=n && j>=1; i++, j--){
    sum = sum + i; 
    printf("%d\n", j);
}

printf("sum is %d\n" , sum);   

// for(int i=n; i>= 1; i--){
//     printf("%d\n", i);
// }


    return 0;
}