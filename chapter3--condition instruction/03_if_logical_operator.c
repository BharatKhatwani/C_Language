#include <stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    //vipPass = 1;


    printf("Enter your age\n");
    scanf("%d", &age);
    // if (age <=60 && age>=18)
    if ((age <= 60 && age >= 18)|| vipPass==1)


    
    {
        printf("Your are above 18 above 60 , you can drive\n");
    }
    else
    {
        printf("You cannot drive \n");
    }

    if (age == 50)
        printf("HALF CENTURY\n");
    return 0;
}
///not shi ka wrong and wrong ka shi
// note agar if else me ek hi statement ha to vo  bracket use krna ki jaruta nhi ha 
