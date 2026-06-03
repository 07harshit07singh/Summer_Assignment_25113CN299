// Program to find GCD of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, min, gcd, i;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0)
    {
        gcd = num2;
    }
    else if (num2 == 0)
    {
        gcd = num1;
    }
    else
    {
        min = (num1 < num2) ? num1 : num2; // find the minimum of the two numbers.

        for (i = 1; i <= min; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                gcd = i; // update gcd to current common divisor.
            }
        }
    }
    printf("GCD of %d and %d is : %d", num1, num2, gcd);
    return 0;
}