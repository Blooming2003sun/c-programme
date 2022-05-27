/*Topic:-grade using switch case2
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int num;
    char garde=0;
    printf("enter your marks\n");
    scanf("%d",&num);
    switch(num>=0&&num<=100)
    {
        case 1:
        num/=10;
        switch(num)
        {
            case 10:
            garde='O';
            break;
            case 9:
            garde='O';
            break;
            case 8:
            garde='E';
            break;
            case 7:
            garde='A';
            break;
            case 6:
            garde='B';
            break;
            case 5:
            garde='C';
            break;
            case 4:
            garde='D';
            break;
            case 3:
            case 2:
            case 1:
            case 0:
            garde ='F';
        }
        break;
        case 0:
        printf("invalid");
    }
    if(garde!=0)
    printf("your grade is %c \n",garde);
    return 0;
}