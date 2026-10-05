#include <stdio.h>

int main()
{
    int n, i, j;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element for each element
    for (i = 0; i < n; i++)
    {
        int previousGreater = -1;

        // Start from the element immediately to the left
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        // Print comma-separated output
        printf("%d", previousGreater);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}