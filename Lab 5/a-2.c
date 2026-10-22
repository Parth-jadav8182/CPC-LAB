// 2. Swap two numbers. (Using temporary variable and without using temporary variable)  

#include<stdio.h>
int main ()
{
    int x = 5;
    int y = 6;
   
     int s = x;
    
     x = y;
     
     y = s;
     
     printf("%d %d",x,y);

}