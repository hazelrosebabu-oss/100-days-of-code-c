#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, temp, digit;
    int digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + (int)pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}