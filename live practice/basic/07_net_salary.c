#include<stdio.h>

int main()
{
    float basic_pay,DA, HRA,total_salary;
    printf("enter your basic pay : \n ");
    scanf("%f", & basic_pay);
    DA=basic_pay*12/100;
    HRA=basic_pay*10/100;
    total_salary=basic_pay+DA+HRA;
    printf("your total salary is %f",total_salary);


    return 0;
}