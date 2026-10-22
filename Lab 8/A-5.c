//5. Get 10 numbers from user print count of odd, even numbers

#include <stdio.h>
int main()
{
    // int i = 1;
    int n = 1, even = 0, odd = 0;
    int count;
    while (n <= 10)
    {
        printf("Enter the number :");
        scanf("%d", &count);
        if (count % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        n++;
    }
    printf("%d %d",even,odd);
    return 0;
}