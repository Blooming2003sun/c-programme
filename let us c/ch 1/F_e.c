/*Topic:-area&perimeter of rectangle and area and circumfereance of circle
Author-Rudreswar_Pal*/
#include<stdio.h>
#define PI 3.14
int main(void)
{
    float length_rectangle,breadth_rectangle,radius_circle;
    printf("Enter the length of the rectangle\n");
    scanf("%f",&length_rectangle);
    printf("Enter the breadth of the rectangle\n");
    scanf("%f",&breadth_rectangle);
    printf("Area of the rectangle is %.2f\n",length_rectangle*breadth_rectangle);
    printf("perimeter of the rectangle is %.2f\n",2*(length_rectangle+breadth_rectangle));
    printf("Enter the radius of the circle\n");
    scanf("%f",&radius_circle);
    printf("Circumference of the circle is %.2f\n",2*PI*radius_circle);
    printf("Area of the circle is %.2f\n",PI*radius_circle*radius_circle);
    return 0;
}