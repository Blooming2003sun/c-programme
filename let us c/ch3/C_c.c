/*Topic:-leapyear detection
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("%d is leapyaer\n",year);
        }
        else
            printf("%d is  not leapyaer\n",year);
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("%d is leapyaer\n",year);
        }
        else
            printf("%d is  not leapyaer\n",year);
    }
    return 0;
}