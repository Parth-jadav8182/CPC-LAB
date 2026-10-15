#include <stdio.h>

void main();
{

        int feet;

        printf("enter feet");
        scanf("%f", &feet);

        float inches = 12 * feet;

        printf("inches is %f", inches);

        return 0;
}