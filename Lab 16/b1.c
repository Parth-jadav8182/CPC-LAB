//1. Print Transpose of a matrix.

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
     printf("The transpose of the matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}