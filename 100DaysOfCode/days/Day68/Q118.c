#include <stdio.h>

int main()
{
    int nums[100];
    int n, i;
    int expectedSum, actualSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("%d\n", expectedSum - actualSum);

    return 0;
}