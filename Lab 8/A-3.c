// 3. Print numbers between two given numbers which is divisible by 2.  

#include <stdio.h>
int main()
{
    //int i = 1;
    int n,a;

    printf("Enter the number :");
    scanf("%d %d",&n ,&a);

    printf("even number = ");
    while (a >=n)
    {
        printf("\n %d", n);
        
        n+=2;
        
        
    }
    return 0;
}