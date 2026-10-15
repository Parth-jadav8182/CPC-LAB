// 2. Pass an array in function to print array elements.

#include <stdio.h>
void  arrey(int ar[], int size);
void main()
{
    int n, ans[n];


    printf("Enter the element: ");
    scanf("%d", &n);

    int i, ar[n];

    

     for (i = 1; i <= n; i++)
    {
       scanf("%d",&ar[i]);
    }
    
    arrey(ar, n);
   
  
}
void  arrey(int ar[], int size)
{   
    for (int i = 1; i <= size; i++)
    {
     printf("%d",ar[i]);
    }
   
   
  
}
