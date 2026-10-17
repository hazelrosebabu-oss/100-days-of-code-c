#include <stdio.h>

int main()
{
    int nums[100], seen[100] = {0};
    int n, i, repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);

        if (seen[nums[i]] == 1)
            repeated = nums[i];
        else
            seen[nums[i]] = 1;
    }

    printf("%d\n", repeated);

    return 0;
}