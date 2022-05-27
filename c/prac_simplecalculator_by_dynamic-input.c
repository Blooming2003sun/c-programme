// THIS IS A C PROGRAMME TO DO BASIC CALCULATION BY TAKING RUNTIME INPUT
#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g,h ;
    //addition
    printf("This is a simple calculator:\n Enter two number to add : \n " );
    scanf("%d %d",&a,&b);
    printf("The sum of the two number is : %d \n\n",a+b);
    // substruction
    printf("Enter two number to substruct : \n " );
    scanf("%d %d",&c,&d);
    printf("the substruction value is :- %d \n\n",c-d);
    //multiplication
    printf("Enter two number to multiply : \n " );
    scanf("%d %d",&e,&f);
    printf("the multiplication value is : %d \n\n",e*f);
    printf("Enter two number to devide : \n " );
    scanf("%d %d",&g,&h);
    printf("the division value is : %d \n   the remainder is : %d \n\n",g/h,g%h);
    printf("Thank You");


    return 0;
}