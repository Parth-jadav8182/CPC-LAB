//2. Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days] 

#include <stdio.h>
int main()
{
    int d;
    printf("Enter the Days : ");
    scanf("%d", &d);
    int y = d / 365;

    printf(" year  : %d", y);
    int r =  d%365;
    int w = r / 7;
    printf("\n week : %d", w);

    int k = w*7 ;
    int day = k/30;
    printf("\n days : %d", day);

     printf("\n%d:%d:%d",y,w,day);
   
    return 0;
}