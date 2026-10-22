// 2. Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.  

#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while(i <= n)
    {
        sum = sum + (i * i);
        i++;
    }

    printf("Sum of series = %d", sum);

    return 0;
}