// 5.  Print given number in reverse order. 

#include<stdio.h>

int main(){
    int num, reverse, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    reverse = 0;
    
    
    while(num > 0){
        digit = num % 10;  
        reverse = (reverse * 10) + digit;  
        num = num / 10; 
    }
    
    printf("Reverse: %d\n", reverse);
    
    return 0;
}