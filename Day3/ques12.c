// Program to find LCM of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, max, lcm, i;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 || num2 == 0)
    {
        lcm = 0; // lcm of zero with any number is zero itself.
    }
    else
    {
        max = (num1 > num2) ? num1 : num2; // find maximun of the two numbers.

        for (i = max; ; i++)
        {
            if (i % num1 == 0 && i % num2 == 0)
            {
                lcm = i; // update lcm to current common multiple.
                break; // exit the loop as we found the lcm.
            }
        }
    }
    printf("LCM of %d and %d is : %d", num1, num2, lcm);
    return 0;
}