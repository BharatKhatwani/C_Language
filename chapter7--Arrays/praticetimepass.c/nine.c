#include<stdio.h>
void storenumber(int arr[][], int m,int n , int number);
int main(){

    storenumber (tables , 0 , 10 , 2);

    storenumber (tables, 1, 10 ,3);
    return 0;
}
void storenumber(int arr[][], int m,int n , int number){
    for ( int i =0 ; i < m ; i++){
        arr[n][m]= number * (i+1);

        
    }
}