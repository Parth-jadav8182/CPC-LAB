// 1. Copy a one string’s value in another string using a string pointer.

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *p, *q;

    printf("Enter a string: ");
    scanf("%s", str1);// hii

    p = str1;
    q = str2;

    while (*p != '\0')
    {
        *q = *p; // copy str2 = str1   // ex ; h = h //second time i = i // same third time i = i
        p++; // p ની કિંમત 1 બીટ વધે // first timt p+1 = mean i/ second time p+2 mean i
        q++; // q ની કિંમત 1 બીટ વધે 
    }

    *q = '\0';

    printf("Original string: %s\n", str1);// hii
    printf("Copied string: %s\n", str2);// hii

    return 0;
}
//   *** use for loop ***
// for (int i = 0; *p!='\0'; i++)
// {
//    *q = *p;
//     p++;
//     q++;
// }
