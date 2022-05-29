/*Topic:-sum of al odd number within range
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int upper_range, lower_range, sum = 0, i;
    printf("Enter lower and upper value\n");
    scanf("%d%d", &lower_range, &upper_range);
    for (i = lower_range; i <= upper_range; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }
    printf("Sum =%d", sum);
    return 0;
}