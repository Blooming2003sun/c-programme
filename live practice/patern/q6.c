/*Topic:-question 1
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int row, col;
    printf("enter no of row : ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i > j)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}