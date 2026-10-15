#include <stdio.h>
void main()
{
    int a, odd, even;
    int number;
    printf("Evter the number : ");
    scanf("%d", &a);

    number = (a % 2 == 0) ? printf(" enven ") : printf(" odd ");
}