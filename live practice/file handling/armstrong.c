/*Topic:-armstrong number
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
   
    int sum=0,temp1,num,i=0,mul,j;
   printf("entre a number\n");
   scanf("%d",&num);
    temp1=num;
    //digit checking
    while(num>0)
    {
        num/=10;
        i++;
    }
    num=temp1;

    while (num>0)
    {
        int mod=num%10;
        for ( j = 0,mul=1; j < i; j++)
        {
            mul*=mod;
        }
        sum+=mul; 
        num/=10;   
    }
    if(sum==temp1)
    printf("%d is a strong number",temp1);
    else
    printf("%d is not a strong number",i);
    return 0;
}