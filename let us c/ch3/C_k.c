/*Topic:-circle point
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x1,y1,radius,x2,y2;
    float distance;
    printf("enter the center of the circle\n");
    scanf("%d%d",&x1,&y1);
    printf("enter the radius of the circle\n");
    scanf("%d",&radius);
    printf("enter the point\n");
    scanf("%d%d",&x2,&y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    if(distance==radius)
    printf("the point lies on the circle\n");
    else if(distance>radius)
    printf("the point lies outside the circle\n");
    else
    printf("the point lies inside the circle\n");
    return 0;
}