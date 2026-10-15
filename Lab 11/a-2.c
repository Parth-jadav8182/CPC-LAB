#include <stdio.h>
int main()
{
    int n, i = 0, sum=0;
    printf("Enter the number :");
    scanf("%d", &n);

    for (size_t i = 0; i <= n; i++)
    {
        printf("%d\n",i);
        sum = sum +i;
    }
    printf("sum = %d",sum);
}