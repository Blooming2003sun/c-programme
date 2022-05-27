#include<stdio.h>

int main()
{
    float celcius,fahrenheit;
    printf("enter tempareture in fahrenheit : \n");
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*5/9;
    printf("the temparature in celcius is %f",celcius);
    return 0;
}