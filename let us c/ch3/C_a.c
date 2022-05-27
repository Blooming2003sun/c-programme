/*Topic:-profit loss
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    float cost_price, selling_price, margin;
    printf("enter the cost price and selling price \n");
    scanf("%f%f", &cost_price, &selling_price);
    if (cost_price > selling_price)
    {
        margin = cost_price - selling_price;
        printf("you made loss ");
        printf("of %.2f", margin);
    }
    else if (cost_price < selling_price)
    {
        margin = selling_price - cost_price;
        printf("you made profit ");
        printf("of %.2f", margin);
    }
    else
    printf("no profit or loss");
    return 0;
}