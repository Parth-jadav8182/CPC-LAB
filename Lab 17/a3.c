//3. Calculate sum of two numbers using pointer.

#include<stdio.h>
void main()
{
    int a=10,b=10, sum=0;
    
    int *p=&a;
    int *c=&b;
    
    sum = *p + *c;
    printf("%d",sum);
}