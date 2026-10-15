/*
12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    // printf("Enter the row and colum :");
    // scanf("%d",&n);
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 6-i; j++)
        {
           printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}