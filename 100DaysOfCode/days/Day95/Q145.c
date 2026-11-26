#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTop(struct Student s[], int n)
{
    int i;
    struct Student top = s[0];

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > top.marks)
            top = s[i];
    }

    return top;
}

int main()
{
    struct Student s[3], top;
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%s %d %d",
              s[i].name,
              &s[i].roll_no,
              &s[i].marks);
    }

    top = findTop(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll_no, top.marks);

    return 0;
}