/*Topic:-rectangle area and perimeter
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    float length,breadth,area,perimeter;
    printf("enter the length and the breadth of the rectangle\n");
    scanf("%f%f",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter)
    printf("area is greater than perimeter\n");
    else
    printf("area is not greater than perimeter\n");
    return 0;
}