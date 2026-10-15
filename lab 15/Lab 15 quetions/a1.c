// 1. LeetCode 1480 — Running Sum of 1d Array

#include <stdio.h>
int main()
{

    int n, arr[100];

    printf("Enter the numer of arrey element :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}