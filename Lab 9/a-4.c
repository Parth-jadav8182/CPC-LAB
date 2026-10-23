// 3. Calculate 𝑥𝑦 without using power function.

#include <math.h>
#include <stdio.h>
int main()
{

    int n;
    int b=1;
    int c;

   

    printf("Enter n: ");
    scanf("%d", &n);
    
    
    while (n<0)
    {
        printf("factorial not difind to negative number");
        return 0;
    }
    while (n>=b)
    {
       c = n*b;
       b++;
    }
    
    printf("%d",c);
    return 0;
}