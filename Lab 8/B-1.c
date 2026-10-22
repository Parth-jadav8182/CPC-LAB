//1. Print number and its square root for 0 to 9.

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