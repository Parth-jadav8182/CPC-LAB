// 4. Take two numbers input from user and perform a multiplication without using a * operator. 

#include <stdio.h>

int main()
{
    int a, b, i = 1, result = 0;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    while(i <= b)
    {
        result = result + a;
        i++;
    }

    printf("Multiplication = %d", result);

    return 0;
}