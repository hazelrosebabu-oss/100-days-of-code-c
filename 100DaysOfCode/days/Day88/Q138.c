#include <stdio.h>

enum Color
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char *names[] = {"RED", "YELLOW", "GREEN"};
    int i;

    for (i = RED; i <= GREEN; i++)
    {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
