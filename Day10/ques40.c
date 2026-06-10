/* Program to print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
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
                printf("%c", 'A' + j -1);
            }
            else
            {
                printf("%c", 'A' + (2 * i - j) - 1);
            }
        }
        printf("\n");
    }
    return 0;
}