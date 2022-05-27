#include<stdio.h>

int main()
{
    float length,width,perimeter,area;
    printf("enter length of the rectangle : \n ");
    scanf("%f",&length);
    printf("enter width of the rectangle : \n ");
    scanf("%f",&width);
    perimeter=2*(length+width);
    printf("perimeter of the rectangle is %f \n",perimeter);
    area=length*width;
    printf("area of the rectangle is %f",area);

    return 0;
}