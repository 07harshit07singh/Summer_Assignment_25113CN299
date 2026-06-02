// Program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int num, digit, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    while (num > 0) 
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("The sum of digits of the number is : %d", sum);
    return 0;
}