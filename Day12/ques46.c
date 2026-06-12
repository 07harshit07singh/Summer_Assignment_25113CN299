// Program to write function for Armstrong.

#include <stdio.h>
#include <math.h>

int armstrong(int n) {
    int temp, digit, count = 0, sum = 0;

    temp = n;
    while(temp != 0)
    {
        temp = temp / 10;
        count ++;
    }

    temp = n;
    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + round(pow(digit, count));
        temp = temp / 10;
    }
    if(sum == n)
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

    if(armstrong(n))
    {
        printf("Number is armstrong.");
    }
    else
    {
        printf("Number is not armstrong.");
    }
    return 0;
}