/*Topic:-question 1
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int row;
    printf("enter no of row : ");
    scanf("%d",&row);
    for (int i = 1; i <= row; i++)
    {
        for (int  j = 1; j <=row+1-i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}