// 2. Print multiplication table of a given number.

#include <stdio.h>
int main()
{

    int n;
   
    int mul = 1;
    

    printf("Enter n: ");
    scanf("%d", &n);

    while (mul <= 10)
    {
        int prod = n * mul;
        printf("%d*%d =%d\n", n, mul, prod);
        mul++;
    }

   

    return 0;
}
