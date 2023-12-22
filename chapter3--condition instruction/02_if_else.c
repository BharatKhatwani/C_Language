#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 80)
    {
        printf("Your are above 80, you cannot drive\n");
    }
    else
    {
        printf("You can drive \n");
    }

    if (age == 50)
        printf("HALF CENTURY\n");

        if(age == 100)
        printf("century");
    return 0;
}
// reation opereators are used to involved condition are greater equal lesser than krta ha
//  do number ki equalities check krna haha double equal; to aata ha
// koibhi non zero number ho single equal to se prograam break ho jayega