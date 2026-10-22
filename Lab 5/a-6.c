// 6. Check whether given character is vowel or consonant. (Using single if only)

#include<stdio.h>
int main ()
{ 
    char ch;

    printf(" Enter the vovel :");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("This is ovel");
    }

    else{
        printf("This is consonat");
    }
    
}