// 3. Count number of even or odd number from an array of n numbers.
#include <stdio.h>
int main()
{
    int n, i, pos=0,neg=0;

    printf("Enter the Number :");
    scanf("%d", &n);
    int a[n];

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i]%2==0)
        {
          pos++;
        }
        else {
            neg++;
        }

    }

  printf("%d %d",pos,neg);
  return 0;
 
}