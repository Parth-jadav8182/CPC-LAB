#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("%d\n%d\n", a, b);

    for (int i= 0; i <= n; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a=b;
        b=c;
    }
}