/*Topic:-celcius to fahrenheit
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    float celcius,fahrenheit;
    printf("enter tempareture in celcius : \n ");
    scanf("%f",&celcius);
    fahrenheit=((celcius*9/5)+32);
    printf("the temparature in fahrenheit is %.3f ",fahrenheit);
    return 0;
}