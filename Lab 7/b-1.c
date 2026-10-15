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