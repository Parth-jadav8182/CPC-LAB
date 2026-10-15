// 2. Find maximum and minimum between two numbers using function.

#include <stdio.h>
void m(int c, int d);
void main()
{
    int a, b;

    printf("Enter the Number : ");
    scanf("%d %d", &a, &b);

    m(a, b);
}
void m(int c, int d)
{
    if (c < d)
    {
        printf(" maximam : %d", d);
    }
    else
    {
        printf(" minimam : %d", c);
    }
}