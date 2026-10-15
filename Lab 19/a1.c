// 1. Find factorial of a number using function and recursive function.

#include <stdio.h>
int fact(int n);
int fat(int n);
void main()
{
    int n, ans, a;

    printf("Enter the factoriale : ");
    scanf("%d", &n);

    ans = fact(n);
    a = fat(n);

    printf("%d \n", ans);
    printf("%d", a);
}
int fact(int n)
{
    int i, a = 1;
    for (i = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}
int fat(int n)
{
    int p;
    if (n == 0 || n == 1)
        return 1;

    p = n * fat(n - 1);
    return p;
}
