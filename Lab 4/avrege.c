#include<stdio.h>
int main()
{ 
        int x,y,z;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    
    printf(" Enter the Number 2 : ");
    scanf("%d",&y);
   


     printf("Enter the Number 3 : ");
     scanf("%d",&z);
    printf("\n");

    int sum = x+y+z;
    int ave = sum/3;

    printf("%d",ave);
    return 0;


}