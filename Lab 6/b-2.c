#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c;
    float x1, x2;

    printf("Enter  the a :");
    scanf("%d", &a);

    printf("Enter  the b :");
    scanf("%d", &b);

    printf("Enter  the c :");
    scanf("%d", &c);

    int determinant = (b * b) - 4 * a * c;
    x1 = ((-b) - sqrt(abs(determinant))) / (2 * a);
    x2 = ((-b) + sqrt(abs(determinant))) / (2 * a);

    if (determinant > 0)
    {
        printf("The determinate is POsitive ");
        printf("x1 = (-%d + %.2f)/2%d, x2 =  (-%d - %.2f)/2%d", b, sqrt(abs(determinant)), a);
    }
    else if (determinant < 0)
    {

        printf("The determinate is Negetive ");
        printf("x1 = (-%d + %.2f)/2%d, x2 =  (-%d - %.2f)/2%d", b, sqrt(abs(determinant)), a);
    }
    else
    {
        printf("The determinate is Zero ");
        printf("(-%d + %.2f)/2%d", b, sqrt(abs(determinant)), a);
    }

    // if(determinant>0)
}
