// 3. Calculate 𝑥𝑦 without using power function.

#include <math.h>
#include <stdio.h>
int main()
{

    int n;
    int b;
    int mul;
    int ans = 1;
   

    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Enter b: ");
    scanf("%d", &b);

    while (mul<=b)
    {
        ans*=n;
        mul++;
    }
    printf("%d",ans);
    return 0;
}