/*Topic:-area of a triangle
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c;
    float s, area;
    printf("enter three side of triangle\n");
    scanf("%d%d%d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area of the triangle is %.2f", area);
    return 0;
}