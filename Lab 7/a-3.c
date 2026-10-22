// 3. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using 
//switch.

#include <stdio.h>
void main()
{
    float a,b;
    int k;
    printf("Evter the number 1 : ");
    scanf("%f", &a);
    printf("Evter the number 2 : ");
    scanf("%f", &b);
    printf(" Enter the choise :");
    scanf("%d",&k);
   
    switch (k)
    {
    case 1:
         int add = a+b;
        printf("%d",add);
         break;
    
     case 2:
         int sub = a-b;
        printf("%d",sub);
         break; 

     case 3:
         int mul = a*b;
        printf("%d",mul);
         break;  
         
     case 4:
         float div = a/b;
        printf("%.2f",div);
         break;     



   
    default:
        break;
    }
}