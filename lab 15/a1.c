// 1. Copy all elements of one array to another.

#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter the elements :");
    scanf("%d", &n);
    int a[n], b[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the number :");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", b[i]);
    }
}