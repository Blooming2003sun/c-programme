#include<stdio.h>

int main()
{
    float celcius,fahrenheit;
    printf("enter tempareture in celcius : \n ");
    scanf("%f",&celcius);
    fahrenheit=((celcius*9/5)+32);
    printf("the temparature in fahrenheit is %f",fahrenheit);
    return 0;
}