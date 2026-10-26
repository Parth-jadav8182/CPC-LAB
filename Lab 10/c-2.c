// 2. Find HCF and LCM of two numbers.  


#include <stdio.h>

int main()
{
    int a, b, x, y, rem, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0)
    {
        rem = x % y;
        x = y;
        y = rem;
    }

    hcf = x;

    if (a == 0 || b == 0)
        lcm = 0;
    else
        lcm = (a / hcf) * b;

    if (hcf < 0)
        hcf = -hcf;

    if (lcm < 0)
        lcm = -lcm;

    printf("HCF = %d\n", hcf);
    printf("LCM = %d", lcm);

    return 0;
}
