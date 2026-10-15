// 4. Perform Addition of two matrices.

#include <stdio.h>
int main()
{
    int rows, cols, i, j;

    printf("Enter the order of your matrix:");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];
    int b[rows][cols];

    printf("For matrix - 1:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element for row-%d col-%d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("For matrix - 2:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("Enter element for row-%d col-%d : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    int c[rows][cols];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];

            // printf("%d ",c[rows][cols]);
        }
        // printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // c[rows][cols] = a[i][j] + b[i][j];

            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}