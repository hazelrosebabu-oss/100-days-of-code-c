#include <stdio.h>

/*
 * Function: findCeil
 * ------------------
 * Finds the index of the smallest element that is
 * greater than or equal to x.
 *
 * Returns:
 *   Index of the ceil element
 *   -1 if no ceil exists
 */
int findCeil(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            // arr[mid] can be the ceil.
            result = mid;

            // Search left for a smaller valid index.
            high = mid - 1;
        }
        else
        {
            // Ceil must be on the right.
            low = mid + 1;
        }
    }

    return result;
}

int main()
{
    int n, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("%d\n", index);

    return 0;
}