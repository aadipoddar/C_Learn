#include <stdio.h>

int main()
{
    //this is not a best method to solve this problem of prime numbers

    int n = 45, prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1)
    {
        printf("This is not a prime number");
    }

    else
    {
        printf("This is a prime number");
    }
    return 0;
}