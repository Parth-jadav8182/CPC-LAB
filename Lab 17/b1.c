// 1. Copy one array to another using pointers.

#include <stdio.h>
void main()
{
   
    int i = 0,n;
    int *p1, *p2;

    printf("Enter the Elements : ");
    scanf("%d", &n);

      int a[n], b[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

   

    p1 = a;
    p2 = b;

    for (i = 0; i < n; i++)
    {
        *(p2 + i) = *(p1 + i);
    }
    printf("Second array is:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p2 + i));
    }
}
