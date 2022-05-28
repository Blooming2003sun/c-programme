/*Topic:-7d
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int n;
    char a = 'A';
    printf("enter the hight of the triangle\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%c ", a++);
        printf("\n");
    }
    return 0;
}