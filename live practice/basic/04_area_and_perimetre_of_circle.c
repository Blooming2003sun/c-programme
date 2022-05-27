#include<stdio.h>

int main()
{
    float radius,perimeter,area;
    printf("enter radius : \n ");
    scanf("%f",&radius);
    perimeter=2*3.14*radius;
    printf("perimeter of the circle is %f \n",perimeter);
    area=3.14*radius*radius;
    printf("area of the circle is %f",area);

    return 0;
}