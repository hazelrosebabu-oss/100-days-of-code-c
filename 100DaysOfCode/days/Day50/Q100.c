#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k;
    int first = 1;

    scanf("%99s", str);

    int n = strlen(str);

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {

            if (!first)
            {
                printf(",");
            }

            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}