// Program to count digits in a number.

#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    if (n == 0)
    {
        count = 1; // since zero has one digit.
    }
    
    while (n != 0)
    {
        n = n/10;
        count++;
    }
    printf("Number of digits in the given number is %d", count);
    return 0;
}
/*
The number should have a maximum of 10 digits (should occupy 4bytes of memory which is standard size of int data type).
However, for greater numbers (having more than 10 digits) we can change the data type to long long that uses 8 bytes of memory(upto 19 digits)
or read the number as a string and count the characters.
*/