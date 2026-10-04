#include <stdio.h>

int main()
{
    int n;

    // Input size of array
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    /*
     * Boyer-Moore Voting Algorithm
     * Step 1: Find a possible majority candidate.
     */
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    /*
     * Step 2: Verify whether the candidate actually
     * occurs more than floor(n / 2) times.
     */
    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }

    // Print majority element if it exists
    if (count > n / 2)
    {
        printf("%d", candidate);
    }
    else
    {
        printf("-1");
    }

    return 0;
}