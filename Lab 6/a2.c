// Q2. Calculate gross salary using basic salary,
// HRA and DA according to the given conditions.

#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic >= 30000)
    {
        hra = basic * 30 / 100;
        da = basic * 95 / 100;
    }
    else if (basic >= 20000)
    {
        hra = basic * 25 / 100;
        da = basic * 90 / 100;
    }
    else if (basic >= 10000)
    {
        hra = basic * 20 / 100;
        da = basic * 80 / 100;
    }
    else
    {
        hra = 0;
        da = 0;
    }

    gross = basic + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f", gross);

    return 0;
}