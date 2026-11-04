#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role role;
    int choice;

    printf("0.ADMIN  1.USER  2.GUEST\n");
    printf("Enter role: ");
    scanf("%d", &choice);

    role = choice;

    switch (role)
    {
    case ADMIN:
        printf("Welcome Admin!\n");
        break;

    case USER:
        printf("Welcome User!\n");
        break;

    case GUEST:
        printf("Welcome Guest!\n");
        break;

    default:
        printf("Invalid role\n");
    }

    return 0;
}