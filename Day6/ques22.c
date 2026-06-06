// Program to convert binary to decimal.

#include <stdio.h>
int main() {
    int binary, decimal = 0, base = 1, digit;
    printf("Enter the binary number : ");
    scanf("%d", &binary);

    while(binary > 0)
    {
        digit = binary % 10;
        decimal = decimal + digit * base;
        binary = binary / 10;
        base = base * 2;
    }
    printf("Decimal representation is : %d\n", decimal);
    return 0;
}