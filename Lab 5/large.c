#include<stdio.h>
int main ()
{
    int x,y,z;

    printf("Enter the number1 : ");
    scanf("%d",&x);

    printf("Enter the number2 : ");
    scanf("%d",&y);

    printf("Enter the number3 : ");
    scanf("%d",&z);

    if(x>y){
        if(x>z){
            printf("number x is largest");
        }
        else {
            printf("number z is largest");
        }
    }
    else {
        if(y>z){
            printf("number y is largest");
        }
        else {
             printf("number z is largest");
        }
    }
}