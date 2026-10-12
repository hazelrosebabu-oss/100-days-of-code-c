#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, start, max = 0, length;

    printf("Enter string: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        start = i;

        for (j = i; s[j] != '\0'; j++)
        {
            int k, repeat = 0;

            for (k = start; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if (repeat)
                break;

            length = j - start + 1;

            if (length > max)
                max = length;
        }
    }

    printf("%d\n", max);

    return 0;
}
