/*Topic:-area of circle
Author-Rudreswar_Pal*/
#include<stdio.h>
#define PI 3.1415
int main(void)
{
    float radius,perimeter,area;
    printf("enter radius : \n ");
    scanf("%f",&radius);
    perimeter=2*PI*radius;
    printf("perimeter of the circle is %f \n",perimeter);
    area=PI*radius*radius;
    printf("area of the circle is %f",area);
    return 0;
}