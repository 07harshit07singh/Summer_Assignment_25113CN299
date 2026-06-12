// Program to write function for Fibonacci.

#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci series : \n");

    for(int i = 0; i < n; i++)
    {
        if(i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
}

int main() {
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    fibonacci(n);
    return 0;
}