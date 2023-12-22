#include<stdio.h>

int main(){
    // int skip=6, i=0;
    // while(i<10){
    //     i++;
    //     if(i!=skip){
    //         continue;
    //     }
        
    //     else{
    //         printf("%d\n", i);
    //     }
    // }

    for(int i=1; i<=10;i++){
        if (i==6) {     // skip ka then use
            continue;
        }
         printf("%d\n", i);
    }
    
    return 0;
}