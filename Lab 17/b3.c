// 3. Add two matrix using pointers. 
#include<stdio.h>
void main()
{
     int *p1, *p2, *p3;
    int n, i = 0;

    printf("Enter the elements : ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];

    printf("Enter elements of first array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    p1 = a;
    p2 = b;
    p3 = sum;
    
      for (i = 0; i < n; i++)
    {
        *(p3+i)=*(p1+i)+*(p2+i);
    }
    for (i = 0; i < n; i++)
    {
       printf("%d \n",*(p3 + i));
    }
}