/*Topic:-georian calender
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    unsigned total_days;
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    total_days=year*365+(year/4)-(year/100)+(year/400)-365;
    if(total_days%7==0)
    printf("01/01/%d is monday\n",year);
    if(total_days%7==1)
    printf("01/01/%d is tuesday\n",year);
    if(total_days%7==2)
    printf("01/01/%d is wednesday\n",year);
    if(total_days%7==3)
    printf("01/01/%d is thursday\n",year);
    if(total_days%7==4)
    printf("01/01/%d is friday\n",year);
    if(total_days%7==5)
    printf("01/01/%d is saturday\n",year);
    if(total_days%7==6)
    printf("01/01/%d is sunday\n",year);
    return 0;
}