#include<stdio.h>
int countodd(int arr[],int n);
int main(){
    int arr[] = {1,3,45,67,46};
   
    printf("%d", countodd(arr,5));
    return 0;
}
int countodd(int arr[],int n){
    int count =0;
    for (int i =0; i < n ; i++){
        if(arr[i] % 2 !=0){
            count ++;
        }
    }
    return count;
}