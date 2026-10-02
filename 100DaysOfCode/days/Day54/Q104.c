#include <stdio.h>

int main()
{
    int n, x;
    int leftSum = 0, totalSum;

    // Take input
    printf("Enter n: ");
    scanf("%d", &n);

    // Sum of numbers from 1 to n
    totalSum = n * (n + 1) / 2;

    // Check each number as a possible pivot
    for (x = 1; x <= n; x++)
    {
        leftSum += x;

        // Right sum includes x, so add x back
        int rightSum = totalSum - leftSum + x;

        if (leftSum == rightSum)
        {
            printf("%d\n", x);
            return 0;
        }
    }

    // No pivot integer exists
    printf("-1\n");

    return 0;
}