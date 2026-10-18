// 2. Using a String pointer remove a space and special character from string.

#include <stdio.h>

int main()
{
    char str[100], *p, *q;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);// Mayank_@123
  
    // sizeof(str) array નું કુલ size આપે.
    // fgets() આખી line વાંચી શકે છે, જેમાં spaces પણ હોય છે. જ્યારે scanf("%s", str) સામાન્ય રીતે પ્રથમ space આવે ત્યાં સુધી જ વાંચે છે.

    p = str;
    q = str;

    while (*p != '\0')
    {
        if ((*p >= 'A' && *p <= 'Z') ||// સ્ટ્રીંગ માં કેપીટલ ABCD // check capital char
            (*p >= 'a' && *p <= 'z') ||// સ્ટ્રીંગ માં નાના abcd  // check small char
            (*p >= '0' && *p <= '9'))// સ્ટ્રીંગ માં કેટલા નંબર    // check number
        {
            *q = *p;// સ્ટ્રીંગ સ્ટોર થાય.
            q++;// q ની વેલ્યુ 1 બીટ વધે.
        }
        p++;
    }

    *q = '\0';

    printf("String after removing spaces and special characters: %s", str);// print Mayank123

    return 0;
}