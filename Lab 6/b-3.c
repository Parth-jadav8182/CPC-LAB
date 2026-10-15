#include<stdio.h>
int main()
{  
    int a,b,c;

    printf("Enter the first side of triangle : ");
    scanf("%d",&a);
     
    printf("Enter the second side of triangle : ");
    scanf("%d",&b);

    printf("Enter the third  side of triangle : ");
    scanf("%d",&c);

   if(){
     if((a*a)+(b*b)=(c*c) || (b*b)+(c*c)=(a*a) || (a*a)+(c*c)=(b*b)){
        printf(" This triangle is  right-angled triangle")
    }
    else if (a==b||b==c||c==a)
    {
       printf(" This triangle is  equilateral triangle") 
    }
    else if(a==b&&b==c&&c==a){
        printf("This triangle is scalene triangle")
    }
   }
    else{
        printf(" this triangle is in valid ")
    }
    
}