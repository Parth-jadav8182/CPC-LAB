// 2. Find whether the given number is prime or not using flag. 


#include <stdio.h>

int main()
{
    int n, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (n > 1 && flag == 0)
        printf("%d is a Prime Number", n);
    else
        printf("%d is not a Prime Number", n);

    return 0;
}
