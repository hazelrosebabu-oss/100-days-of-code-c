#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Menu choice;
    int ch;
    int a, b;

    printf("1.ADD  2.SUBTRACT  3.MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    choice = ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case ADD:
        printf("%d\n", a + b);
        break;

    case SUBTRACT:
        printf("%d\n", a - b);
        break;

    case MULTIPLY:
        printf("%d\n", a * b);
        break;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}