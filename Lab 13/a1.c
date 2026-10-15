// 1.  Read n numbers from user and print in normal and reverse order.
#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter the Number :");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("normal order : %d\n", a[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf(" revarse order :%d\n", a[i]);
    }

    return 0;
}