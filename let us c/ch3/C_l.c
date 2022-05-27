/*Topic:-point position
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int x1, y1;
    printf("enter the point\n");
    scanf("%d%d", &x1, &y1);
    if (x1 == 0)
    {
        if (y1 == 0)
            printf("the point is in the origin\n");
        else
            printf("the point is on Y-axis\n");
    }
    else if (y1 == 0)
        printf("the point is on X-axis\n");

    else
        printf("the point is  not on X-axis and not on the Y-axis\n");

    return 0;
}