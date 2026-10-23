// 5. Find factors of the given number. 

#include<stdio.h>
int main()
{
    int a;
    int div=1;

    printf("Enter the number :");
    scanf("%d",&a);
     
    while (a<=0)
    {
       printf("This is not difinded ");
       return 0;
   }
   printf("factors:");
    
    while(div <= a)
    {
        if(a % div == 0)
        printf("%d ", div);
        div++;
    }    


}