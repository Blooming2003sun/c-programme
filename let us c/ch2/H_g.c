/*Topic:-trignometric ratios calculations
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    float angle;
    printf("enter the angle in radiun \n");
    scanf("%f", &angle);
    printf("sine of the angle is %f\n", sin(angle));
    printf("cosine of the angle is %f\n", cos(angle));
    printf("tangent of the angle is %f\n", tan(angle));
    printf("cosecent of the angle is %f\n", 1.0/sin(angle));
    printf("secent of the angle is %f\n", 1.0/cos(angle));
    printf("cotangent of the angle is %f\n", 1.0/tan(angle));
    return 0;
}