// Q4. Check whether the last digit of a number
// is even or odd.

#include <stdio.h>

int main()
{
    int n, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    digit = n % 10;

    if (digit % 2 == 0)
        printf("Last digit is Even");
    else
        printf("Last digit is Odd");

    return 0;
}