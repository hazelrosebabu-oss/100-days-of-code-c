#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status status;
    int choice;

    printf("0.SUCCESS  1.FAILURE  2.TIMEOUT\n");
    printf("Enter status: ");
    scanf("%d", &choice);

    status = choice;

    switch (status)
    {
    case SUCCESS:
        printf("Operation successful\n");
        break;

    case FAILURE:
        printf("Operation failed\n");
        break;

    case TIMEOUT:
        printf("Operation timed out\n");
        break;

    default:
        printf("Invalid status\n");
    }

    return 0;
}