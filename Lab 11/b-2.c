#include <stdio.h>
int main()
{
    int n, i = 0, sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);

    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0,  j=0, l=0;



    for (int i = n; i != 0;)
    {
        int digit = i % 10;
        switch (digit)
        {
        case 0:
            a++;
            break;
        case 1:
            b++;
            break;
        case 2:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        case 6:
            f++;
            break;
        case 7:
            g++;
            break;
        case 8:
            h++;
            break;
        case 9:
            l++;
            break;
        case 10:
            j++;
            break;

        default:
            break;
        }
        i=i/10;
    }

    {
    }
    printf("one =%d\n two =%d\n three =%d\n Four =%d\n Five =%d\n Six =%d\n Seven =%d\n Eight =%d\n Nine = %d\n  Zero =%d\n",a,b,c,d,e,f,g,h,l,j);
}