/*Topic:-prime number list upto given range
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int low, up, i, count;
    printf("enter lower value \n");
    scanf("%d", &low);
    printf("enter upper value \n");
    scanf("%d", &up);
    for (int j =(low>1?low:2); j <= up; j++)
    {
        count = 0;
        i = 2;
        while (i <= sqrt(j))
        {
            if (j % i == 0)
                count++;
            i++;
        }
        if (count==0)
            printf("%d is a prime number \n", j);
    }
    return 0;
}