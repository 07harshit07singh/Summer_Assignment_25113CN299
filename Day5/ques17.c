// Program to check perfect number.

#include <stdio.h>
int main() {
    int num, sum = 0, i;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num <= 0)
    {
        printf("%d is not a perfect number.", num);
    }

    else 
    {
        for(i = 1; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            printf("%d is a perfect number.", num);
        }
        else
        {
            printf("%d is not a perfect number.", num);
        }
    }
    
    return 0;
}