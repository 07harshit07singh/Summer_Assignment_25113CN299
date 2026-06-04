// Program to find nth Fibonacci term.

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c; // a and b are first two terms of fibonacci series & c is the next term.
    printf("Enter the term number : ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("The %dth term of Fibonacci series is  ; %d", n, a);
    }
    else if (n == 2)
    {
        printf("The %dth term of Fibonacci series is  ; %d", n, b);
    }
    else
    {
        for(int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %dth term of Fibonacci series is : %d", n, c);
    }
    return 0;
}