/*Topic:-smallest number of denomination
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int N, one = 0, two = 0, five = 0, ten = 0, fifty = 0, hundred = 0,total;
    printf("enter the value\n");
    scanf("%d", &N);
    hundred = N / 100;
    fifty=(N%100)/50;
    ten=(N%50)/10;
    five=(N%10)/5;
    two=(N%5)/2;
    one=N-(hundred*100+fifty*50+ten*10+five*5+2*two);
    total=hundred+fifty+ten+five+two+one;
    printf("total notes is %d",total);
    return 0;
}