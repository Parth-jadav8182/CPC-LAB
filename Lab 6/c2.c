// Q2. Convert RGB color values into CMYK values.

#include <stdio.h>

int main()
{
    int red, green, blue;
    float r, g, b, white;
    float cyan, magenta, yellow, black;

    printf("Enter RGB values (0 to 255): ");
    scanf("%d %d %d", &red, &green, &blue);

    if (red < 0 || red > 255 ||
        green < 0 || green > 255 ||
        blue < 0 || blue > 255)
    {
        printf("Invalid RGB values.");
        return 0;
    }

    r = red / 255.0;
    g = green / 255.0;
    b = blue / 255.0;

    if (red == 0 && green == 0 && blue == 0)
    {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;
    }
    else
    {
        white = r;

        if (g > white)
            white = g;

        if (b > white)
            white = b;

        cyan = (white - r) / white;
        magenta = (white - g) / white;
        yellow = (white - b) / white;
        black = 1 - white;
    }

    printf("Cyan = %.2f\n", cyan);
    printf("Magenta = %.2f\n", magenta);
    printf("Yellow = %.2f\n", yellow);
    printf("Black = %.2f\n", black);

    return 0;
}