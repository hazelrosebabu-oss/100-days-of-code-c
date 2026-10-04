#include <stdio.h>

int main()
{
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find the next greater element for each array element
    for (int i = 0; i < n; i++)
    {
        int nextGreater = -1;

        // Search elements to the right of arr[i]
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break; // Nearest greater element found
            }
        }

        // Print in comma-separated format
        printf("%d", nextGreater);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}