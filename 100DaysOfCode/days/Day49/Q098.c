#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("%c. ", name[0]);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    for (i = 1; i < lastSpace; i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c. ", name[i]);
        }
    }

    if (lastSpace != -1)
    {
        printf("%s", &name[lastSpace + 1]);
    }

    return 0;
}