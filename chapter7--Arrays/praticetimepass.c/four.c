#include<stdio.h>
void printnumber(int arr[],int n);
int main(){
    int arr[] = {1,2,33,4,5,12};
   printnumber (  arr, 6)  ;
  

    return 0;
}
void printnumber (int arr[],int n){
    for(int i =0; i <n; i++){
        printf("%d\t", arr[i]);

    }
    printf("\n");
}