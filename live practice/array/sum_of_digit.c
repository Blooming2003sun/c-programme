/*Topic:-sum of the digit of a given number
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int number, n, sum = 0;
    printf("enter the number\n");
    scanf("%d", &number);
    n = number;
    for (; n != 0;)
    {
        sum += (n % 10);
        n /= 10;
    }
    printf("sum of digit of %d = %d", number, sum);
    return 0;
}