#include<stdio.h>

int main()
{
	int a,b;
	printf("enter two number\n");
	scanf("%d %d",&a,&b);
	printf("before swapping numbers are %d  ,%d \n",a,b);
	
	b=a+b;
	a=b-a;
	b=b-a;
	printf("after swapping numbers are %d  ,%d \n",a,b);
	return 0;
}