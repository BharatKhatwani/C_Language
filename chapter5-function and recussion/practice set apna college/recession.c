#include<stdio.h>
//float convertTemp(float celsius);

int calcuatedpercentage(int maths,int sanskrit, int science);

int main(){
    // float far = convertTemp(37);
    // printf("far : %f",far);
    int maths = 100;
    int science = 67;
    int sanskrit = 80;
    printf("%d\n",calcuatedpercentage(maths,sanskrit,science));
    return 0;
}
int calcuatedpercentage(int maths,int sanskrit,int science){
    return ((maths + sanskrit+ science )/3) ;
}


















// float convertTemp(float celsius){
//     float far = celsius *(9.0/5.0) +32;
//     return far;
// }