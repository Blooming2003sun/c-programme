#include<stdio.h>
int sumn(int x)
{
    if(x>0)
    return x+sumn(x-1);
    else
    return 0;

}
int main(void)
{
    int n,sum = 0;
    printf("enter no of integer \n");
    scanf("%d",&n);
    sum = sumn(n);
    printf("sum = %d",sum);

    return 0;
}
