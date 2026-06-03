// Program to check whether a number is prime.

#include <stdio.h>
int main() {
    int num, prime = 1, i; // prime is set to 1 assuming that the number is prime until proven otherwise.
    printf("Enter a number : ");
    scanf("%d", &num);
    
    if (num <= 1)
    {
        prime = 0; // number less than or equal to 1 are not prime.
    }
    else 
    {
        for (i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                prime = 0; // number is not prime.
                break; // exit the loop.
            }
        }
    }
    if (prime)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is not a prime number.", num);
    }
    return 0;
}