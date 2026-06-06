// Program to convert decimal to binary.

#include <stdio.h>
int main() {
    int num, binary = 0, place = 1, remainder;
    printf("Enter the decimal number : ");
    scanf("%d", &num);

    while(num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * place;
        num = num / 2;
        place = place * 10;
    }
    printf("Binary representation is : %d\n", binary);
    return 0;
}