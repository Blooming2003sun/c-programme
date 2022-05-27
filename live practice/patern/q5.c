/*Topic:-question 1
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int row,col;
    printf("enter no of row : ");
    scanf("%d",&row);
    for (int i = 1; i <= 2*row-1; i++)
    {
        col=(i<=row)?i:(2*row-i);
        for (int  j = 1; j <=col ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}