#include<stdio.h>
#include<math.h>

int main()
{
    float  principle1,principle2,rate1,rate2,time1,time2,period,si,ci;
     
    printf("enter the value of principle for simple interest : \n");
    scanf("%f",&principle1);
    printf("enter rate of  simple interest : \n");
    scanf("%f",&rate1);
    printf("enter time of simple interest : \n");
    scanf("%f",&time1);
    si=(principle1*time1*rate1/100);
    printf("you have to pay %f as interest",si);


    printf("\n\n\n enter principle for compound interest : \n");
    scanf("%f",&principle2);
    printf("enter rate for compound interest : \n");
    scanf("%f",&rate2);
    printf("enter time(in year) for compound interest : \n");
    scanf("%f",&time2);
    printf("enter period for compound interest : \n");
    scanf("%f",&period);
    ci=(principle2*pow((1+(rate2/(100*period))),(time2*period)))-principle2;
    printf("you have to pay %f as interest",ci);
    return 0;
}