/*Topic:-absolute value
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int A;
    printf("enter a number\n");
    scanf("%d",&A);
    if(A>0)
    A=A;
    else
    A=-A;
    printf("absolute value is %d",A);
    return 0;
}