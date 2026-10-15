// 2. Count number of positive or negative number from an array of n numbers.
#include <stdio.h>
int main()
{
    int n, i, pos=0,neg=0;

    printf("Enter the Number :");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i<a[i])
        {
          pos++;
        }
        else if(i>a[i]){
            neg++;
        }
    }

  printf("%d %d",pos,neg);
  return 0;
}