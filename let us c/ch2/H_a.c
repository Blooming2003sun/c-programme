/*Topic:-sum of five digit number
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int number,sum=0;
    printf("enter a 5 digit number\n");
    scanf("%d",&number);
    sum+=number%10;
    number=number/10;
    sum+=number%10;
    number=number/10;
    sum+=number%10;
    number=number/10;
    sum+=number%10;
    number=number/10;
    sum+=number;
    printf("the sum of the digit is %d",sum);
    return 0;
}