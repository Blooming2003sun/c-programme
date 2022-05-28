/*Topic:-7b
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int n, count = 1;
    printf("enter the hight of the triangle\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= n - i; k++)
            printf(" ");
        for (int j = 1; j <= i + 1; j++)
            printf("%d ", count++);

        printf("\n");
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int k = 0; k <= n - i; k++)
            printf(" ");
        count = count - 2 * i - 1;
        for (int j = 1; j <= i; j++)
            printf("%d ", count++);

        printf("\n");
    }

    return 0;
}