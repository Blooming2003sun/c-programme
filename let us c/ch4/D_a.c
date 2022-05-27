/*Topic:-leapyear
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if((year%400==0&&year%100==0)||(year%4==0&&year%100!=0))
    printf("%d is leapyear",year);
    else
    printf("%d is not leapyear",year);
    return 0;
}