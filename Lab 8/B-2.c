#include <stdio.h>
int main()
{
    // int i = 1;
    int a = 100;
    int n = 200;
    while (a <= n)
    {
       
        if (a%7==0 && (a %5 != 0))
        {
           printf("%d\n",a) ;
        }
      

        a++;
    }
  
    return 0;
}