// 2. Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop. 

#include <stdio.h>
int main()
{
    int i = 1;
    int n;

    printf("Enter the number :");
    scanf("%d",&n);

    printf("odd number = ");
    while (i <= n)
    {
        printf("\n %d", i);
        
        i+=2;
        
        
    }
    return 0;
}