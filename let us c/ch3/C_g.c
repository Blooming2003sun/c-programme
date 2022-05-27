/*Topic:-triangle valid or not
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("enter first angle\n");
    scanf("%d",&a);
    printf("enter second angle\n");
    scanf("%d",&b);
    printf("enter third angle\n");
    scanf("%d",&c);
    if(a+b+c==180)
    printf("triangle valid\n");
    else
    printf("triangle not valid\n");
    return 0;
}