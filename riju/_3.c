/*Topic:-
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x;
    float y;
    printf("enter the degre value\n");
    scanf("%d",&x);
    y=(22.0/7)*x/180;
    printf("sin(y) = %.2f\n",sin(y));
    printf("cos(y) = %.2f\n",cos(y));
    return 0;
}