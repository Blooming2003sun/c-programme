/*Topic:-leapyear in given range
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int lower_year,upper_year;
    printf("Enter your lower value\n");
    scanf("%d",&lower_year);
    printf("Enter your upper value\n");
    scanf("%d",&upper_year);
    int i= lower_year;
    printf("list of leap years are \n");
    while(i<=upper_year)
    {
        if(i%100==0 && i%400==0)
        printf("%d\n",i);
        else if(i%100!=0 && i%4==0)
        printf("%d\n",i);
        i++;
    }
    return 0;
}