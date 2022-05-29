/*Topic:- total and avarage of subjects
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    float math,physics,chemistry,total,avarage;
    printf("enter number of math : \n ");
    scanf("%f",&math);
    printf("enter number of physics : \n ");
    scanf("%f",&physics);
    printf("enter number of chemistry : \n ");
    scanf("%f",&chemistry);
    total=math+physics+chemistry;
    printf("you got total %.2f marks \n",total);
    avarage=total/3;
    printf("your avarage is %.2f \n",avarage);
    return 0;
}