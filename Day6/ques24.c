// Program to find x^n without using pow().

#include <stdio.h>
int main() {
    int x, n, i, result = 1;
    printf("Enter value of x : ");
    scanf("%d", &x);

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        result = result * x;
    }
    printf("%d^%d is : %d\n", x, n, result);
    return 0;
}