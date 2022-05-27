/*Topic:-fahrenheit to centigrade converter
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    float temp_centigrade,temp_fahrenheit;
    printf("Enter the temparature in fahrenheit\n");
    scanf("%f",&temp_fahrenheit);
    temp_centigrade = (temp_fahrenheit -32 )*5/9;
    printf("The temparature in centigrade is %.2f\n",temp_centigrade);
    return 0;
}           