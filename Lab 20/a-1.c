// 1. Find weather given string is palindrome or not.

#include <stdio.h>
#include <string.h>

// strlen(str) string માં રહેલા characters ની લંબાઈ આપે.

int main()
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);//ex : hello

    i = 0;
    j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])//h != o (wrong) 
        {                  
            flag = 0;   // so flag value = o 
            break;
        }

        i++;
        j--;
    }

    if (flag == 1)
        printf("String is Palindrome");
    else
        printf("String is Not Palindrome");// print Not Palindrome  

    return 0;
}

