#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' &&
            freq[str[i] - 'a'] > 1)
        {
            printf("First repeating alphabet = %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating alphabet\n");

    return 0;
}