#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[50], destinationName[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceName);

    printf("Enter destination filename: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL)
    {
        printf("Source file does not exist!\n");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL)
    {
        printf("Error creating destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destinationName);

    return 0;
}