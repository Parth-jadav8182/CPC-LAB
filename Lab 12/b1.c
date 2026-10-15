#include<stdio.h>
int main()
{
     int i, j, n, sum=0, ans=0;
   printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j <= i; j++)
        {
            sum = sum + j;
        }
        ans+=sum;
       
    }
     printf("%d \n",sum);
}
