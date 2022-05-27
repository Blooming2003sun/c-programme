#include<stdio.h>
int fibonacci(int);
int main(void)
{
    int n,sum;
    printf("enter a number \n");
    scanf("%d",&n);
    sum=fibonacci(n);
    printf("%d",sum);
    return 0;
}
int fibonacci(int x)
{
    if(x>2)
    return fibonacci(x-2) + fibonacci(x-1);
    else if(x==1||x==2)
    return x-1;
    else
    return -1;

}