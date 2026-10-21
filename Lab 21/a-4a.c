// 4. Create structure student with name, percentage and age. Read data of 5 students using array of structure


#include <stdio.h>

struct Student
{
    char name[50];
    float percentage;
    int age;
};

int main()
{
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter percentage: ");
        scanf("%f", &s[i].percentage);

        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Percentage: %.2f%%\n", s[i].percentage);
        printf("Age: %d\n", s[i].age);
    }

    return 0;
}
