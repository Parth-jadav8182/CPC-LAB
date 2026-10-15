// 1. Print value and address of a variable


#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n",p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}