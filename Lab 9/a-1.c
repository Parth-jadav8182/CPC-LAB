// 1. Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.

#include<stdio.h>
int main ()
{
   
    int n;
    int v = 1;
   int sum;

    printf("Enter n: ");
    scanf("%d", &n);

    while(v <= n)
    {
        if(v % 2 == 0)
            sum -= v;
        else
            sum += v;

        v++;
    }

    printf("Sum = %d", sum);

    return 0;
}
