// 2. Display the current Date & Time. [#include for time and ctime function and time_t datatype.]

#include<stdio.h>
#include<time.h>

void main()
{
    time_t currenttime;

    time(&currenttime);

    printf("Current Date and Time : %s", ctime(&currenttime));
}