// 3. Print addition of 2 numbers. (with & without scanf
#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter the Number 1 : ");
    scanf("%d", &x);

    printf("Enter the Number 2 : ");
    scanf("%d", &y);

    int sum = x + y;
    printf("%d", sum);
    return 0;
}
