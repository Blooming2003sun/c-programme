#include<stdio.h>
int main(void)
{   int a;
    printf("hello\n");
    printf("enter your lucky number\n");
    scanf("%d",&a);
    printf("%d has a address %x ",a,&a);
    return 0;
}