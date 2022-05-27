#include<stdio.h>
int main()
{int a,b,i,s;
printf("Enter starting number \n");
scanf("%d",&a);
printf("Enter closing number  \n");
scanf("%d",&b);
for(i=a ; i<=b;i++)
{if(i%2!=0)
printf(" %d \n ",i);
}


return 0;	
}