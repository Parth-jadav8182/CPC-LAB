//3. Count simple interest using function.

#include <stdio.h>
float intrest (int a,int b,int c);
void main(){
    float p,t,r,i;
   
    printf("Enter The Principal Time and Rent ");
    scanf("%f %f %f",&p,&t,&r);

    intrest(p,t,r);

}
float intrest(int a,int b,int c){
    float i = (a*b*c)/100;
    printf("%f",i);
}