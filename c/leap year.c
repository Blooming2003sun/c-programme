#include<stdio.h>

int main()
{
    int year;
    printf("enter year\n");
    scanf("%d",&year);
    if(year%100==0 && year%400==0)
    {
        printf("%d is  a leapyear",year);
    }
   else if(year%100!=0 && year%4==0)
  { printf("%d is  a leapyear",year);}
   else
     {printf("%d is not a leapyear",year);}
    
	return 0;

}