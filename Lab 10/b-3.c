// 3. Check whether the given number is palindrome or not. 


#include <stdio.h>

int main()
{
    int n, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp >= 0 && temp == rev)
        printf("%d is a Palindrome Number", temp);
    else
        printf("%d is not a Palindrome Number", temp);

    return 0;
}
