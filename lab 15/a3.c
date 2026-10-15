//3. Count number of elements divisible by 3 in array.



#include <stdio.h>
int main()
{
    int n, a[n], i, count;

    printf("Enter the elements :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the number :");
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if (a[i]%3==0)
        {
          count++;
        }
    }
    printf("%d",count);
    
}