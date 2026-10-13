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

    // Traverse every subarray of size k
    for (int i = 0; i <= n - k; i++)
    {

        int firstNegative = 0;

        // Search for first negative number in current window
        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        // Avoid extra space after last output
        if (i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}