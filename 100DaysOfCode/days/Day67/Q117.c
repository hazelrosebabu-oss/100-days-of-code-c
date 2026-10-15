#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int m, n;
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter first sorted array: ");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter second sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    i = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    printf("Merged array: ");

    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}