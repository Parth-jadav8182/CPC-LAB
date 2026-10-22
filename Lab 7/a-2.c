// 1. Print day name of week using switch.  

#include <stdio.h>
void main()
{
    int Month;
    printf("Evter the month(1-12) : ");
    scanf("%d", &Month);
   
    switch (Month)
    {
    case 1:
        printf("January, days = 31");
         break;


    case 2:
        printf("February, days = 28,29");
        break;

        
    case 3:
        printf("March, days = 30");
         break;

    case 4:
        printf("April, days = 30");
         break;

    case 5:
        printf("May, days = 30");
         break;

    case 6:
        printf("June, days = 31");
         break;

    case 7:
        printf("July, days = 30");
         break;

    case 8:
        printf("Augest , days = 31");
         break;
    case 9:
        printf("September, days = 30");
         break;
   
    case 10:
        printf("Octomber, days = 30");
         break;
    case 11:
        printf("November, days = 30");
         break;
    case 12:
        printf("Desember, days = 31");
         break;



    default:
        break;
    }
}