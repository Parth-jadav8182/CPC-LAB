//1. Add two numbers using function.

#include<stdio.h>
void add(int c,int d);
void main(){
    int a,b;

    printf("Enter the Number : ");
    scanf("%d %d",&a,&b);

    add(a,b);

}
void add(int c,int d){
    printf("%d",c+d);
}