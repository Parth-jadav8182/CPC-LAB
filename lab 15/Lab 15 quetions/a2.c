// 2. LeetCode 1470 — Shuffle the Array

#include <stdio.h>
void main()
{
    int n, arr[100], ans[100];
     printf("Enter the numer of arrey element :");
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        ans[k++] = arr[i];
        ans[k++] = arr[i + n];
    }
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", ans[i]);
    }
}