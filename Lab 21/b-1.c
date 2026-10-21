// 1. Demonstrate structure pointer.

#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Student s;
    struct Student *ptr;// Defind The pointer.

    ptr = &s;

    
    printf("Enter The Id, Name and Marks\n");
    scanf("%d %[^\n] %f", &s.id, &s.name, &s.marks);

    printf("Student Details:\n");
    printf("ID = %d\n", ptr->id);
    printf("Name = %s\n", ptr->name);
    printf("Marks = %.2f\n", ptr->marks);

    return 0;
}

// Structure pointer માં -> operator નો ઉપયોગ structure ના members access કરવા માટે થાય છે.