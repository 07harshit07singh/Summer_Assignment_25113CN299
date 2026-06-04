// Program to check Armstrong number.

#include <stdio.h>
#include <math.h>
int main() {
    int num, original, remainder, n = 0, result = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    original = num;
    // counting the number of digits in the number.
    while (original != 0)
    {
        original = original / 10;
        n++;
    }

    original = num;
    // calculating the sum of nth power of each digit of the number.
    while (original != 0)
    {
        remainder = original % 10;
        result = result + round(pow(remainder, n));
        original = original / 10;
    }

    if(result == num)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}