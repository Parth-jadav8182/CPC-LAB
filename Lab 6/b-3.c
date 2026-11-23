// 3.  Three  sides  of  a  triangle  are  entered  through  the  keyboard,  WAP  to  check  whether  the  triangle  is 
// isosceles, equilateral, scalene or right-angled triangle.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first side of triangle : ");
    scanf("%d", &a);

    printf("Enter the second side of triangle : ");
    scanf("%d", &b);

    printf("Enter the third side of triangle : ");
    scanf("%d", &c);

    // 1. Check triangle is valid or not
    if ((a + b > c) && (b + c > a) && (c + a > b)) {

        printf("\nThis triangle is VALID\n");

        // 2. Right-angled check
        if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b)) {
            printf("This triangle is Right-Angled Triangle\n");
        }

        // 3. Equilateral - badha side same
        if (a == b && b == c) {
            printf("This triangle is Equilateral Triangle\n");
        }
        // 4. Isosceles - be side same
        else if (a == b || b == c || c == a) {
            printf("This triangle is Isosceles Triangle\n");
        }
        // 5. Scalene - badha side alag
        else {
            printf("This triangle is Scalene Triangle\n");
        }

    } else {
        printf("\nThis triangle is INVALID\n");
    }

    return 0;
}