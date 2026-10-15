#include <stdio.h>
int main()
{
    int s;
    printf("Enter the second : ");
    scanf("%d", &s);
    int h = s / 3600;

    printf(" hours : %d", h);
    int r = s % 3600;
    int m = r / 60;
    printf("\n minute : %d", m);

    int k = m % 3600;
    int sec = s % 60;
    printf("\n second : %d", sec);

    printf("\n%d:%d:%d",h,m,sec);
   
    return 0;
}