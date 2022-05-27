#include<stdio.h>
int main()
{int n,n2,product=1;
printf("enter a number \n");
scanf("%d",&n);
n2=n;
if(n2==0||n2==1);
else
{
while(n2>1)
{product =product*n2;
n2--;
    }
    }
    printf("factorial of %d  is %d",n,product);
return 0;	

}