//2. Manual implementation of strlen(), strcpy() and strcmp() function.

//   **** Main points ***
// 
// strlen() સ્ટ્રીંગની લંબાઈ આપે.
// strcpy() સ્ટ્રીંગ કોપી કરે.
//  strcmp() બે સ્ટ્રીંગ ને સરખાવે.

#include <stdio.h>

// 1. Function Declaration
void my_strlen(char *);
void my_strcpy(char *, char *);
void my_strcmp(char *, char *);

int main()
{
    char str1[100], str2[100], str3[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // 2. Function Calling
    my_strlen(str1);
    my_strcpy(str3, str1);
    my_strcmp(str1, str2);

    return 0;
}

// 3. Function Definition

void my_strlen(char *s)// this function find a str lenght.
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    printf("Length = %d\n", len);

}

void my_strcpy(char *dest, char *src)// This function is copy the string.
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    printf("Copied string = %s\n", dest);
}

void my_strcmp(char *s1, char *s2)// This function is check str1 == st2 /equality of string.
{
    while (*s1 == *s2 && *s1 != '\0')
    {
        s1++;
        s2++;
    }

    if (*s1 == *s2)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}

