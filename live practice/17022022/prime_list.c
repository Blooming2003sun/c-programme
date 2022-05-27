/*Topic:-prime number list upto given range
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int number, i , count;
    printf("enter the highest number \n");
    scanf("%d", &number);
    for (int j = 1; j <= number; j++)
    {
        count = 0;
        i = 1;
        while (i <= j)
        {
            if (j % i == 0)
                count++;
            i++;
        }
        if (count == 2)
            printf("%d is a prime number \n", j);
    }
    return 0;
}