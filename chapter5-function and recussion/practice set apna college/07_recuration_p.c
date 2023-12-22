#include<stdio.h>
int calcPercentage(int science, int math, int sanskrit);                 // first step
int main(){
    int science = 45;                                                        // third step
int math =95;
int sanskrit =67;

printf("percentage is : %d\n", calcPercentage (science, math, sanskrit));     // fourth step
    return 0;
}

int   calcPercentage(int science,int math, int sanskrit){                   // second step same first line then formula
return ((science +math + sanskrit) / 3 ) ;

}                    