#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Bharat.txt", "r");         //chamging the value of bharat.txt ...
if(ptr  == NULL)
printf("This file does not exist\n");
else{


fscanf(ptr, "%d ", &num);                // it brother of scanf
fscanf(ptr, "%d ", &num2);
fclose(ptr);
printf("The value of num is %d\n", num);
printf("The value of num is %d\n", num2);

}
    return 0;
}