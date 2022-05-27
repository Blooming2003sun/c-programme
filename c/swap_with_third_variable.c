#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter two number\n");
	scanf("%d %d",&a,&b);
	printf("before swapping numbers are %d  ,%d \n",a,b);
	c =a;
	a=b;
	b=c;
	printf("after swapping numbers are %d  ,%d \n",a,b);
	return 0;
}