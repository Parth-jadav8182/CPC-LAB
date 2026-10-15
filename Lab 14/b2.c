/*
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/
#include <stdio.h>
int main()
{
    int i, j, n, m = 1;
    printf("Enter the  row and colum :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                m = 1;
            }
            else
            {
                m = 0;
            }
            printf("%d", m);
        }

        printf("\n");
    }
    return 0;
}