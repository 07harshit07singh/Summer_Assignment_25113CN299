/* Program to print number pyramid.
    1
   121
  12321
 1234321
123454321
*/ 

#include <stdio.h>
int main() {
    int n, space, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2 * i - 1; j++)
        {
            if(j <= i)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d", 2 * i - j);
            }
        }
        printf("\n");
    }
    return 0;
}