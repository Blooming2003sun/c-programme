/*Topic:-straight line
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int x1,x2,x3,y1,y2,y3;
    float area;
    printf("enter value of x1 and y1\n");
    scanf("%d%d",&x1,&y1);
    printf("enter value of x2 and y2\n");
    scanf("%d%d",&x2,&y2);
    printf("enter value of x3 and y3\n");
    scanf("%d%d",&x3,&y3);
    area=1.0/2*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
    if(area==0)
    printf("all points lie in a straight line\n");
    else
    printf("all points don't lie in a straight line\n");
    return 0;
}