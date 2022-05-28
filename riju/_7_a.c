/*Topic:-7a
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int n;
    printf("enter the hight of the triangle\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}