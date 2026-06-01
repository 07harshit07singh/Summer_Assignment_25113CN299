// Program to find factorial of number.

#include <stdio.h>
int main() {
    int n, factorial = 1, i;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %d", n, factorial);
    return 0;
}