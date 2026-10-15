#include <stdio.h>
int main()
{
    int n, i = 0, a,r=1;
    printf("Enter the base & power :");
    scanf("%d %d", &n, &a);

    for (size_t i = 1; i<=a; i++)
    {
         r = r*n;
    }
    printf("%d",r);
}