// Program to check whether a number is palindrome.

#include <stdio.h>
int main() {
    int num, digit, rev = 0, original;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    original = num;

    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    
    if (original == rev)
    {
        printf("The number is palindrome.");
    }
    else
    {
        printf("The number is not palindrome.");
    }
    return 0;
}