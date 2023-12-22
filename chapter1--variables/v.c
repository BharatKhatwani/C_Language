#include <stdio.h>

int main()
{
    int num, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the factorial of the number
    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is: %lld\n", num, factorial);

    return 0;
}