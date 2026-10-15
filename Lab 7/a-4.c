#include <stdio.h>
void main()
{
    float a,b,c;
    float largest;
    printf("Evter the number : ");
    scanf("%f %f %f", &a,&b,&c);

    largest = (a<b) ? ((c<b)?(b):(c)) : (a<c)?(a):(c);
    printf("%.2f",largest);

}