/*Topic:-triangle
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int max, side1, side2, side3, mid, min;
    printf("enter side 1\n");
    scanf("%d", &side1);
    printf("enter side 2\n");
    scanf("%d", &side2);
    printf("enter side 3\n");
    scanf("%d", &side3);
    if (side1 >= side2 && side1 >= side3)
        max = side1;
    else if (side2 >= side1 && side2 >= side3)
        max = side2;
    else if (side3 >= side2 && side3 >= side1)
        max = side3;

    if (side1 <= side2 && side1 <= side3)
        min = side1;
    else if (side2 <= side1 && side2 <= side3)
        min = side2;
    else if (side3 <= side2 && side3 <= side1)
        min = side3;

    mid = side1 + side2 + side3 - max - min;
    if(max<(mid+min))
    {
    if (max == min)
    printf("equilteral\n");
    else if(max==min || mid == min)
    printf("isoscelene\n");
    else
    (pow(max, 2) == (pow(mid, 2) + pow(min, 2)) ? printf("right angled triangle\n") : printf("scelene\n"));
    }
    else
    printf("triangle not possible\n");
    return 0;
}