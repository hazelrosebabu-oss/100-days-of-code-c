#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}