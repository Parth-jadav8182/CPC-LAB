WW//1. Generate Fibonacci series of N given number using function name fibbo().
#include <stdio.h>
 void fibbo (int n);
int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("%d\n%d\n", a, b); 
}

 void fibbo (int n){
    for (int i=0; i<n; i++){
       int a,b,c;
        c = a + b;
        printf("%d\n", c);
        a=b;
        b=c;
        printf("%d",n);
    }
}


