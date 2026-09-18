#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal: ");

    for (sum = 0; sum <= r + c - 2; sum++)
    {
        for (i = 0; i < r; i++)
        {
            j = sum - i;

            if (j >= 0 && j < c)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}