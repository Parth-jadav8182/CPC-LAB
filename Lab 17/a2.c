// 2. Demonstrate int, float, double and char pointer.

#include <stdio.h>
void main()
{
    int a = 10;
    double b = 222.5;
    float c = 22.5;
    char d = 'a';

    int *p = &a;
    double *p1 = &b;
    float *p2 = &c;
    char *p3 = &d;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", p);
    printf("Value using pointer = %d\n", *p);

    printf("Value of a = %d\n", b);
    printf("Address of a = %p\n", p1);
    printf("Value using pointer = %d\n", *p);

    printf("Value of a = %f\n", c);
    printf("Address of a = %p\n", p2);
    printf("Value using pointer = %f\n", *p);

    printf("Value of a = %c\n", d);
    printf("Address of a = %p\n", p3);
    printf("Value using pointer = %c\n", *p);
}
