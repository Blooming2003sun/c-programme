/*Topic:-boxer's weight class
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int weight;
    printf("enter your weight in pound\n");
    scanf("%d",&weight);
    if(weight<115)
    printf("you are Flyweight\n");
    else if(weight>=115&&weight<=121)
    printf("you are Bantamweight\n");
    else if(weight>=122&&weight<=153)
    printf("you are Featherweight\n");
    else if(weight>=154&&weight<=189)
    printf("you are Middleweight\n");
    else if(weight>=190)
    printf("you are Heavyweight\n");

    return 0;
}