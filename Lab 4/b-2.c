// 2. Print simple interest. (principal*roi*time period)/100)


#include <stdio.h>

void main()
{
    int  principal,roi, time;
      
    printf("Enter the principal,roi and time period ");
    scanf("%d %d %d ",&principal,&roi,&time);
     
    int a = (principal*roi*time)/100;

    printf("%d",a);

       
}