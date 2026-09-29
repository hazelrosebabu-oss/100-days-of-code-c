#include <stdio.h>

int main()
{
    int n, target;
    int first = -1, last = -1;

    // Input size of array
    scanf("%d", &n);

    int nums[n];

    // Input sorted array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Input target
    scanf("%d", &target);

    // Find first occurrence using binary search
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1; // Search towards the left
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Find last occurrence using binary search
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1; // Search towards the right
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Print result
    printf("%d,%d\n", first, last);

    return 0;
}