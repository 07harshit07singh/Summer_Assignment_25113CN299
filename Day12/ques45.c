// Program to write function for palindrome.

#include <stdio.h>

int palindrome(int n) {
    int digit, rev = 0, temp;

    temp = n;

    while(temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    if(rev == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(palindrome(n))
    {
        printf("Number is palindrome.");
    }
    else
    {
        printf("Number is not palindrome.");
    }
    return 0;
}