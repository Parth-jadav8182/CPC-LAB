// 4. Create structure student with name, percentage and age. Read data of 5 students using array of structure

#include <stdio.h>

union Student
{
    char name[50];
    float percentage;
    int age;
};

int main()
{
    union Student u[5];

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter details of student");

        printf("Enter name: ");
        scanf(" %[^\n]", u[i].name);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\n", u[i].name);
    }

    return 0;
}
