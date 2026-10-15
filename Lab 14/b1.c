/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter the row and colum :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            int sum = sum + 1;
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}