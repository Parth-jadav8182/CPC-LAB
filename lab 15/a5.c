//5. Input a string in character array and print string and length of string.


#include<stdio.h>
#include<string.h>
int main()
{
   
    char str[100];
    printf("Enter string:");
    scanf("%s", str);
    int len = strlen(str);
    printf(" len    : %d\n string : %s",len,str);
}