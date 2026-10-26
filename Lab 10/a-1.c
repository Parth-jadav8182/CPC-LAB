// 1. Find out sum of first and last digit of a given number. 

#include <stdio.h>

int main()
{
    int n, d, h, i, b;

    printf("Enter a number: ");
    scanf("%d", &n);

    i = n;
    d = n % 10; // Get last digit

   
    while (i>= 10)
    {
        i = i / 10;
    }
    b = i; 

    h= b + d;
    printf("Sum of first and last digit: %d\n", h);

    return 0;
}
