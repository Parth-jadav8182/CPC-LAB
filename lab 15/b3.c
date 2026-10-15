//3. Swap first element with last, second to second last and so on.

#include<stdio.h>
int main ()
{
     int i, n, temp; 
    printf("Enter size : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }
     for (i = 0; i < n; i++)
    {
       a[i]=temp;
       a[i]=a[i-n+1];
       a[i-n+1]=temp;

       scanf("%d",a[i]);
       printf("%d",a[i]);
    }

}