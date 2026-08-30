#include <stdio.h>

int main()
{
    int num, first, last, temp, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    result = num - first * divisor - last;
    result = result + last * divisor + first;

    printf("Number after swapping = %d\n", result);

    return 0;
}