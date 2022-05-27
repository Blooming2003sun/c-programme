/*Topic:-chech the given number is prime or not
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int number,j=1;
    printf("enter the  highest number \n");
    scanf("%d",&number);
    while(j<=number)
    {
        int count=0,i=1;
        while (i<=j)
        {
            if(j%i==0)
            count++;
            i++;   
        }
    if(count==2)
    printf("%d is a prime number \n",j);
    j++;
    }
    return 0;
}