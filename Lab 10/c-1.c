// 1. Check whether the given number is Armstrong or not. 


#include <stdio.h>

int main()
{
    int n, temp, rem, sum = 0, digits = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    int t = n;

    while (t > 0)
    {
        digits++;
        t = t / 10;
    }

    while (n > 0)
    {
        rem = n % 10;
        power = 1;
        i = 1;

        while (i <= digits)
        {
            power = power * rem;
            i++;
        }

        sum = sum + power;
        n = n / 10;
    }

    if (temp >= 0 && sum == temp)
        printf("%d is an Armstrong Number", temp);
    else
        printf("%d is not an Armstrong Number", temp);

    return 0;
}
