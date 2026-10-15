//5. Store n elements in an array and print the elements using pointer.

#include<stdio.h>
void main ()
{
     int n;
   


    printf("Enter the elements : ");
    scanf("%d",&n);

   int arr[n];
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int *p= arr;

     for (int i = 0; i < n; i++)
     {
       printf("%d",*p+i);
        printf("\n");

     }
    


}