/*Topic:-to print the number divisible by 3 and 7 with in given range
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int n,i=1;
    printf("Enter the upper limit \n");
    scanf("%d",&n);
    printf("The numbers divisible by both 3 and 7 are :\n");
    while (i<=n)
    {
        if(i%3==0 && i%7==0)
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}