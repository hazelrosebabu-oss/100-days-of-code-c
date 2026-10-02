#include <stdio.h>

int main()
{
    int n, i;
    int totalSum = 0;
    int leftSum = 0;
    int pivotIndex = -1;

    /* Input the size of the array */
    scanf("%d", &n);

    int nums[n];

    /* Input array elements and calculate total sum */
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    /* Find the leftmost pivot index */
    for (i = 0; i < n; i++)
    {
        /*
         * Right sum = Total sum - Left sum - Current element
         */
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            pivotIndex = i;
            break;
        }

        /* Add current element to left sum for next iteration */
        leftSum += nums[i];
    }

    printf("%d\n", pivotIndex);

    return 0;
}