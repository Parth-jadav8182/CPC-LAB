// 3. LeetCode 1431 — Kids With the Greatest Number of Candies

#include <stdio.h>
int main()
{
    int n, arr[100], extra;
    printf("Enter the numer canddes :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    printf("Enter the Extra candey : ");
    scanf("%d", &extra);
        
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {

        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        printf("%s ", arr[i] + extra >= max ? "true" : "false");
    }
    return 0;
}