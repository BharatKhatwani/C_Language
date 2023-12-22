#include<stdio.h>
#include<math.h>      // liberary function for calcutation value of maths 

//void calculatePrice(float value);

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,  float b);

int main(){
    // int side;
    // printf("Enter the value of side\n");
    // scanf("%d", &side);
    // printf("The value of area is %f", pow(side,2));

// int n = 4; 
// printf("%f", pow(n,2));


float a = 5.0;
float b = 10.0;
float rad = 3.0;
float side = 34.2;
printf("area is : %f\n", rectangleArea(a, b));        // yaha jo bhi value likhga vo calcuale hogi
 printf("area is : %f\n", circleArea(rad));
 printf("area is : %f\n", squareArea(side));
 
 return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 * rad *rad;
}

float rectangleArea(float a, float b){
    return a*b;
}



   