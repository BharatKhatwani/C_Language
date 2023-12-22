//      change to parameters in function donot change the value in calling function

#include<stdio.h>
void calculatePrice(float value);
int main(){                                                              // function me kitna bhi change kr lega  arugment koi problem nhi hogi
    float value  = 100.0;
    calculatePrice(value);
    printf("value is : %f", value );
    return 0;
}


void calculatePrice(float value){
    value =value + (0.18 * value);
    printf("final price is : %f\n", value);
}