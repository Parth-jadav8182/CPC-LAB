// 4. Search element in array.

#include <stdio.h>
int main()
{
    int n, a[n], i, num;

    printf("Enter the elements :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the number :");
        scanf("%d", &a[i]);
    }
    printf("Enter Search element  :");
     scanf("%d", &num);

     
    for ( i = 0; i < n; i++)
    {
        if (num==a[i])
        {
         printf(" index of element  : %d",i);
        }
    }


}