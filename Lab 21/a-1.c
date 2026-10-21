// 1. Create, declare and initialize structure employee.

#include <stdio.h>

struct empployee
{
    
     char s[10];
    int age;
    int id;
    int salary;
};
void main()
{

    struct empployee s1;
    {
        printf("Enter the Name,age,id and salary : \n");
        scanf("%s %d %d %d", &s1.s, &s1.age ,&s1.id,&s1.salary);
    }

    printf(" %s\n %d\n %d\n %d",s1.s,s1.age,s1.id,s1.salary);
}
