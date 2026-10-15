// * * * * *
// * *
// * *
// * *
// * * * * *
#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter the row and colum :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else if (j != 1 || j != n)
        {
            printf(" ");
        }
        else
            printf("*");
    }
}