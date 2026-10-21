// 3. Demonstrate difference between structure and union.

#include <stdio.h>

struct Student
{
    int id;
    float marks;
    char grade;
};

union StudentData
{
    int id;
    float marks;
    char grade;
};

int main()
{
    struct Student s;
    union StudentData u;

    printf("Structure:\n");
    s.id = 101;
    s.marks = 85.5;
    s.grade = 'A';

    printf("ID = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
    printf("Grade = %c\n", s.grade);

    printf("\nUnion:\n");
    u.id = 101;
    printf("ID = %d\n", u.id);

    u.marks = 85.5;
    printf("Marks = %.2f\n", u.marks);

    u.grade = 'A';
    printf("Grade = %c\n", u.grade);

    return 0;
}