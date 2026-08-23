#include <stdio.h>

int main()
{
    int n, i, odd = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("Sum = %d\n", sum);

    return 0;
}