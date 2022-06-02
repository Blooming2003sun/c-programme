/*Topic:-armstrong number
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int sum = 0, temp1, i = 0, mul, j;
    for (int num = 0;; num++)
    {
        sum = 0, temp1 = num, i = 0;
        // digit checking
        while (temp1 > 0)
        {
            temp1 /= 10;
            i++;
        }
        temp1 = num;
        while (temp1 > 0)
        {
            int mod = temp1 % 10;
            for (j = 0, mul = 1; j < i; j++)
                {
                    mul *= mod;
                }
            sum += mul;
            temp1 /= 10;
        }
        if (sum == num)
            printf("%d is a strong number\n", num);
        // printf("%d\n", num);
    }
    return 0;
}