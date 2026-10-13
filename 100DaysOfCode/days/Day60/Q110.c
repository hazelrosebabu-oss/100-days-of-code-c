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

    // Input window size
    scanf("%d", &k);

    // Check if k is valid
    if (k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    // Traverse each subarray of size k
    for (int i = 0; i <= n - k; i++)
    {
        int max = arr[i];

        // Find maximum element in current window
        for (int j = i + 1; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d", max);

        // Avoid extra space after last element
        if (i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}