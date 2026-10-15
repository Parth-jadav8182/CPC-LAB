#include <stdio.h>
int main()
{
    int n, i = 0,sum=0 ;
    printf("Enter the number :");
    scanf("%d", &n);

     for (size_t i = 1; i <= 10; i++)
    {
        printf("%d * %d =%d\n",n,i,n*i);
       
    }
}
