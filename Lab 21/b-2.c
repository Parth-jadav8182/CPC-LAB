


#include <stdio.h>

struct Address
{
    char city[20];
    int pincode;
};

struct Student
{
    int id;
    char name[20];
    struct Address addr;
};

void display(struct Student s);

int main()
{
    struct Student s;

    printf("Enter Student ID   : ");
    scanf("%d", &s.id);

    printf("Enter Student Name : ");
    scanf(" [^\n]", s.name);

    printf("Enter City         : ");
    scanf(" [^\n]", s.addr.city);

    printf("Enter Pincode      : ");
    scanf("%d", &s.addr.pincode);

    display(s);

    return 0;
}

void display(struct Student s)
{
    printf("\n--- Student Details ---\n");
    printf("Student ID   : %d\n", s.id);
    printf("Student Name : %s\n", s.name);
    printf("City         : %s\n", s.addr.city);
    printf("Pincode      : %d\n", s.addr.pincode);
}
