#include <stdio.h>

int main()
{
    int n, k;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input size of subarray
    scanf("%d", &k);

    // Check if k is valid
    if (k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    int currentSum = 0;

    // Find sum of first window
    for (int i = 0; i < k; i++)
    {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    // Slide the window through the array
    for (int i = k; i < n; i++)
    {
        currentSum = currentSum - arr[i - k] + arr[i];

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    // Print maximum sum
    printf("%d", maxSum);

    return 0;
}