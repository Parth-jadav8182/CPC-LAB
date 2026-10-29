// Q1. Calculate electricity bill according to units
// and add 20% surcharge to the bill.

#include <stdio.h>

int main()
{
    float unit, bill, surcharge, total;

    printf("Enter electricity units: ");
    scanf("%f", &unit);

    if (unit < 0)
    {
        printf("Invalid units.");
        return 0;
    }

    if (unit <= 50)
        bill = unit * 0.50;
    else if (unit <= 150)
        bill = 50 * 0.50 + (unit - 50) * 0.75;
    else if (unit <= 250)
        bill = 50 * 0.50 + 100 * 0.75
             + (unit - 150) * 1.20;
    else
        bill = 50 * 0.50 + 100 * 0.75
             + 100 * 1.20 + (unit - 250) * 1.50;

    surcharge = bill * 20 / 100;
    total = bill + surcharge;

    printf("Basic Bill = Rs. %.2f\n", bill);
    printf("Surcharge = Rs. %.2f\n", surcharge);
    printf("Total Bill = Rs. %.2f", total);

    return 0;
}