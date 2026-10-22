// 1. Calculate sum and average of the square of ƒrst 10 integers whose square has last digit 3. 

#include <math.h>
#include <stdio.h>
int main()
{
    // int i = 1;
    int n, a = 1;

    printf("Enter the number :");
    scanf("%d", &n);

    while (a <= n)
    {

        

        printf("%d --> %.2f\n", a, sqrt(a));
        a++;
    }

    return 0;
}