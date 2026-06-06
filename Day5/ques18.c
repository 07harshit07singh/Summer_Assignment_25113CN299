// Program to check strong number.

#include <stdio.h>
int main() {
    int num, original, digit, factorial, sum = 0, i;
    printf("Enter the number : ");
    scanf("%d", &num);

    original = num;

    while(original > 0)
    {
        digit = original % 10;
        factorial = 1;

        for(i = 1; i <= digit; i++)              
        {
            factorial = factorial * i;   
        }

        sum = sum + factorial;
        original = original / 10;
    }
    if(sum == num)
    {
        printf("%d is a strong number.", num);
    }
    else
    {
        printf("%d is not a strong number.", num);
    }
    return 0;
}