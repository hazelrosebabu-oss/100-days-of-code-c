#include <stdio.h>

int main()
{
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%99s", binary);

    printf("1's Complement = ");

    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else
        {
            printf("\nInvalid binary number\n");
            return 0;
        }
    }

    printf("\n");

    return 0;
}