//this is a simple interest calculator
#include<stdio.h>

int main(){
    int principle,rate,year ;
    int interest = ((principle*rate*year)/100) ;
    printf("Enter the value of principle : \n");
    scanf("%d",&principle);
    printf("Enter the value of rate of interest : \n");
    scanf("%d",&rate);
    printf("Enter the value of year : \n");
    scanf("%d",&year);
    printf("you have to pay %d as interest ", ((principle*rate*year)/100));


    
    return 0;
}