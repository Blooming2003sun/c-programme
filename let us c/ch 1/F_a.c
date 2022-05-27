/*Topic:-gross slary calculation 08/02/2022
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int basic_salary,dearness_allowance,house_rent_allowance,gross_salary;
    printf("Enter your basic salary \n");
    scanf("%d",&basic_salary);
    dearness_allowance=0.40*basic_salary;
    house_rent_allowance=0.20*basic_salary;
    gross_salary=basic_salary+dearness_allowance+house_rent_allowance;
    printf("your gross salary is %d",gross_salary);
    return 0;
}