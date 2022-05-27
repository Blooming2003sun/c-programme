/*Topic:-odd even detection
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    if(number%2==0)
    printf("%d is even",number);
    else
    printf("%d is odd",number);
    return 0;
}