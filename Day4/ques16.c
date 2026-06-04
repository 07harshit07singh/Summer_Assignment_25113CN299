// Program to print Armstrong numbers in a range.

#include <stdio.h>
#include <math.h>
int main() {
    int lower, upper, num, original, remainder, result = 0, n = 0;
    printf("Enter the lower and upper limits respectively : ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are : ", lower, upper);

    for(num = lower; num <= upper; num++)
    {
        original = num;
        n = 0;
        result = 0;
        while(original != 0) //to count the number of digits in the number.
        {
            original = original / 10;
            n++;
        }
        
        original = num;
        while(original != 0) //to calculate the sum of nth power of each digit of the number.
        {
            remainder = original % 10;
            result = result + round(pow(remainder, n));
            original = original / 10;
        }

        if(result == num)
        {
            printf("%d\t", num);
        }
    }
    return 0;
}