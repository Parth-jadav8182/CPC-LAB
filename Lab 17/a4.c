//4. Swap value of two numbers using pointer.

#include<stdio.h>
void main ()
{
    int a=10,b=5,temp;
     
    int*p=&a;
    int*c=&b;

    temp=*p;
    *p=*c;
    *c=temp;

  
    printf("%d %d",*p,*c);

}