// Q3. Check the type of triangle using its three sides.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid triangle.");
    }
    else
    {
        if (a == b && b == c)
            printf("Equilateral triangle\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");

        if (a * a + b * b == c * c ||
            a * a + c * c == b * b ||
            b * b + c * c == a * a)
            printf("Right-angled triangle");
        else
            printf("Not a right-angled triangle");
    }

    return 0;
}