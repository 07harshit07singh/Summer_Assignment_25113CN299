// Program to find the product of digits of a number.

#include <stdio.h>
int main() {
    int num, digit, product = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    while (num > 0)
    {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }
    printf("Product of digits of the number is %d", product);
    return 0;
}