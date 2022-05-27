/*Topic:-bmi calculator
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    float weight,hight,bmi;
    printf("enter your weight in kg\n");
    scanf("%f",&weight);
    printf("enter your height in meters\n");
    scanf("%f",&hight);

    bmi=weight/pow(hight,2);
    if(bmi<15)
    printf("your bmi category is starvation");
    else if(bmi>=15&&bmi<=17.5)
    printf("your bmi category is anorexic");
    else if(bmi>=17.5&&bmi<=18.5)
    printf("your bmi category is underweight");
    else if(bmi>=18.5&&bmi<=25)
    printf("your bmi category is ideal");
    else if(bmi>=25&&bmi<=30)
    printf("your bmi category is overweight");
    else if(bmi>=30&&bmi<=40)
    printf("your bmi category is obese");
    else if(bmi>=40)
    printf("your bmi category is morbidly obese");
    else
    printf("error");


    return 0;
}