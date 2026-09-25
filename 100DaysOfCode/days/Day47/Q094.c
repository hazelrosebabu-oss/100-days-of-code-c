#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;
    int currentLength = 0;
    int maxLength = 0;
    int currentStart = 0;
    int maxStart = 0;
    int j;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            if (currentLength == 0)
                currentStart = i;

            currentLength++;
        }
        else
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                maxStart = currentStart;
            }

            currentLength = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("Longest word: ");

    for (j = maxStart; j < maxStart + maxLength; j++)
        printf("%c", str[j]);

    printf("\nLength = %d\n", maxLength);

    return 0;
}