// Program to count even and odd elements.

#include <stdio.h>
int main() {
    int arr[100], n, i, even = 0, odd = 0;
    printf("Enter the number of elements :\n");
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even elements are : %d\n", even);
    printf("Odd elements are : %d\n", odd);
    return 0;
}