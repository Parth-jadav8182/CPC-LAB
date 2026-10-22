// 1. Read 3 numbers, multiply largest number from first two numbers to third one using conditional. 

#include <stdio.h>

int main()
{
    int a, b, c;
    int largest;
    int result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    largest = (a > b) ? a : b;

   
    result = largest * c;

    printf("Result = %d", result);

    return 0;
}