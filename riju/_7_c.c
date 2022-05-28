/*Topic:-7c
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int n;
    printf("enter the hight of the triangle\n");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ",j);
        printf("\n");
    }
    for (int i = 2; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}