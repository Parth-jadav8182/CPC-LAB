// 4. Print digits of given number. 

#include<stdio.h>

int main(){
    int n, d;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
   printf("Digits: ");
    
   
    while(n > 0){
        d = n % 10;  
        printf("%d ", d);
        n = n / 10;  
    }
   
    
    return 0;
}