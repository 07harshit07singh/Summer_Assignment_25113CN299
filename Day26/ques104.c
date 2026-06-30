// Program to create quiz application.

#include <stdio.h>
int main()
{
    int ans, score = 0;

    printf("Q1. National animal of India?\n");
    printf("1.Lion 2.Panda 3.Tiger 4.Elephant\n");
    scanf("%d", &ans);

    if(ans == 3)
        score++;

    printf("\nQ2. 5 - 3 = ?\n");
    printf("1.6 2.2 3.4 4.1\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ3. C Language developed by?\n");
    printf("1.Dennis Ritchie 2.Bjarne Stroustrup 3.James Gosling 4.Guido van Rossum\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}