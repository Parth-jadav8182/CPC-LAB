// 5. Swap two numbers using call by value and call by reference.

#include <stdio.h>
void add(int c, int d);
void main()
{
    int a, b, temp;
    int *p1, *p2;

    printf("Enter the Number : ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    add(a, b);
}
void add(int c, int d)
{
    printf("%d \n", c);
    printf("%d", d);
}