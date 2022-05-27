/*Topic:-Cartesian to polar transform  
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    float x,y,r,phi;
    printf("enter x and y co-ordinates\n");
    scanf("%f%f",&x,&y);
    r=sqrt(pow(x,2)+pow(y,2));
    phi=atan(y/x)*180*7/22;
    printf("r = %.2f \n phi = %.2f degree",r,phi);
    return 0;
}