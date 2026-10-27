#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    if (count > 0)
        average = (float)sum / count;
    else
        average = 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    fclose(fp);

    return 0;
}
