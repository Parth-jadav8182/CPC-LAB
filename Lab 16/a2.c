// 2. Count number of positive, negative and zero elements from 3 X 3 matrix.

#include <stdio.h>

int main()

{
    int a0, a1, a2, b0, b1, b2, c0, c1, c2;

    printf("Enter the 1st row :");
    scanf("%d %d %d", &a0, &a1, &a2);

    printf("Enter the 2st row :");
    scanf("%d %d %d", &b0, &b1, &b2);

    printf("Enter the 3st row :");
    scanf("%d %d %d", &c0, &c1, &c2);

    int a[3][3] = {
        {a0, a1, a2},
        {b0, b1, b2},
        {c0, c1, c2}};

    int i, j, pos = 0, nev = 0, zero = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            //  printf("%d ", a[i][j]);

            if (a[i][j] > 0)
            {
                pos++;
            }
            else if (a[i][j] == 0)
            {
                zero++;
            }
            else
            {
                nev++;
            }
        }
    }
    printf("positive =%d Negative =%d Zero =%d", pos, nev, zero);

    return 0;
}