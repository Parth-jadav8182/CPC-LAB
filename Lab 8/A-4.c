#include <stdio.h>
int main()
{
    //int i = 1;
    int n,a=1, sum=0;

    printf("Enter the number :");
    scanf("%d",&n);

    
    while (a<=n )
    {
      sum += a;
        
        a++;
        
        
    }
    printf("%d", sum);

    return 0;
}