// * * * * *
// * * * *
// * * *
// * *
// *
#include <stdio.h>
int main()
{
    int i, j = 0, n, k;
    printf("Enter the row and colum :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i != 1)
        {
            for (k = 0; k <= n - j; k++)
            {
                printf(" ");
            }
        }
        for (j = 0; j <= n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}