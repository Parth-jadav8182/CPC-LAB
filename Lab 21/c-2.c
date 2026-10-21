// 2. Add two times hh, mm and ss using structure. 


#include <stdio.h>

struct Time
{
    int hh;
    int mm;
    int ss;
};

int main()
{
    struct Time t1, t2, sum;

    printf("Enter first time:\n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &t1.hh, &t1.mm, &t1.ss);

    printf("\nEnter second time:\n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &t2.hh, &t2.mm, &t2.ss);

    sum.ss = t1.ss + t2.ss;
    sum.mm = t1.mm + t2.mm;
    sum.hh = t1.hh + t2.hh;

    if (sum.ss >= 60)
    {
        sum.mm += sum.ss / 60;
        sum.ss %= 60;
    }

    if (sum.mm >= 60)
    {
        sum.hh += sum.mm / 60;
        sum.mm %= 60;
    }

    printf("\nTotal Time = %02d:%02d:%02d\n",
           sum.hh, sum.mm, sum.ss);

    return 0;
}
