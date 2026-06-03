// Program to print prime numbers in a range.

#include <stdio.h>
int main() {
    int lower, upper, num, prime, i;
    printf("Enter the lower and upper limits respectively : ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are : ", lower, upper);

    for(num = lower; num <= upper; num++)
    {
        if (num <= 1)
        {
            continue; // skip numbers less than or equal to 1 as they are not prime.
        }
        prime = 1; //assume number is prime until proven otherwise.

        for (i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                prime = 0; // number is not prime.
                break; // exit the loop.
            }
        }
        if (prime)
        {
            printf("%d\t", num); // print prime number.
        }
    }
    return 0;
}