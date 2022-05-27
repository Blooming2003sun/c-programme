/*Topic:-
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x1,x2,y1,y2;
    float distance;
    printf("enter the x and y co-ordinate of first point\n");
    scanf("%d%d",&x1,&y1);
    printf("enter the x and y co-ordinate of second point\n");
    scanf("%d%d",&x2,&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("the distance is %f",distance);
    return 0;
}