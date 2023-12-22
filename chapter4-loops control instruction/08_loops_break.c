#include<stdio.h>

int main(){
//    int i = 0;
//     do{
// printf("The value of i is %d\n", i);
// if(i==4){
//     break;
// }
// i++;
//     }while(i<10);

for(int i=1; i<=5; i++){
    if(i==4){
        break;
    }
    printf("%d\n", i);
}
printf("end");
    return 0;
}