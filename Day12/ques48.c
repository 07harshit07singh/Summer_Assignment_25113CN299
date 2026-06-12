// Program to write function for perfect number.

#include <stdio.h>

int perfect(int n) {
    int sum = 0;

    if(n <= 0)
    {
        return 0;
    }
    else
    {
        for(int i = 1; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                sum = sum + i;
            }
        }
        if(sum == n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(perfect(n))
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
    return 0;
}