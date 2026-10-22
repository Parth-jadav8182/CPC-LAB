// 3. Take two numbers input from user and perform a division operation and find out quotient and reminder 
//     (without using / and % operator) also note that a smaller number should divide a bigger number.

#include <stdio.h>

int main()
{
    int a, b, quotient = 0, remainder;

    printf("Enter bigger number: ");
    scanf("%d", &a);

    printf("Enter smaller number: ");
    scanf("%d", &b);

    if(a < b || b <= 0)
    {
        printf("Invalid input");
    }
    else
    {
        remainder = a;

        while(remainder >= b)
        {
            remainder = remainder - b;
            quotient++;
        }

        printf("Quotient = %d", quotient);
        printf("\nRemainder = %d", remainder);
    }

    return 0;
}