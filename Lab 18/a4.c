// 4. Return the maximum of three floating-point numbers.

#include <stdio.h>
float m(float c, float d, float e);
void main()
{
    float a, b, c, ans;

    printf("Enter the Number : ");
    scanf("%f %f %f", &a, &b, &c);

    printf("%f",m(a,b,c));
}
float m(float c, float d, float e)
{
   

    if (c < d)
    {
        if (e < d)
        {
            return d;
        }
        else{
            return e;
        }
    }
    else if (c < e)
    {
        return e;
    }
    else
    {
        return c;
    }
}