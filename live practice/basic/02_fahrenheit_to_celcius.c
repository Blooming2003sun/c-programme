/*Topic:-fahrenheit to celcius
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    float celcius,fahrenheit;
    printf("enter tempareture in fahrenheit : \n");
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*5/9;
    printf("the temparature in celcius is %.3f",celcius);
    return 0;
}