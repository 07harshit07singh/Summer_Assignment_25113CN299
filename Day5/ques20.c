// Program to find largest prime factor of a number.

#include <stdio.h>
int main() {
    int num, i, temp, largest = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;
    for(i = 2; i <= temp; i++)
    {
        while(temp % i == 0)
        {
            largest = i;
            temp = temp / i;
        }
    }
    
    printf("%d is the largest prime factor of %d.", largest, num);
    return 0;
}