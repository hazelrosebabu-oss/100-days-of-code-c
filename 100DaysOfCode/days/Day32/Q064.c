#include <stdio.h>

int main()
{
    long long num;
    int freq[10] = {0};
    int digit, i, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num != 0)
    {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    for (i = 1; i < 10; i++)
    {
        if (freq[i] > freq[maxDigit])
            maxDigit = i;
    }

    printf("Most frequent digit = %d\n", maxDigit);

    return 0;
}