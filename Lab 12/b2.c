#include<stdio.h>
int main()
{
    int i, j, n;
    float fact = 1, e=1.0;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * n;
        }
        e = e + 1.0 / fact;
    }
    printf("%d \n", e);
}
