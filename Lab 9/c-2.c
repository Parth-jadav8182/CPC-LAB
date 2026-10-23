// 2. Convert decimal number to binary. (i.e. n=11  output: 1101 

#include <stdio.h>

void main()
{
    int n, rem, bin = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 2;
        bin = bin + rem * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary number = %d", bin);
}