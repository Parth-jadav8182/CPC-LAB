#include <stdio.h>
int main()
{
    int n, i = 0,sum=0 ;
    printf("Enter the number :");
    scanf("%d", &n);

     for (size_t i = 1; i <= n;)
    {
        if (n%i==0)
        {
            printf("%d\n",i);
        }
       i++;
    }
    
}