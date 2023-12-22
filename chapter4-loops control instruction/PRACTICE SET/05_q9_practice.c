#include <stdio.h>

int main()
{
    // disclaimer ; this is not best method to solve the question

    int n = 14, prime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            prime = 0;//change the value of n then answer
            break;
        }
    }
        if (prime == 0 )
        {
            printf("This is not a prime number");
        }
        else
        {
            printf("The is a  prime number");
        }
        return 0;
    }