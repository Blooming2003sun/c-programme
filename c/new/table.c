#include<stdio.h>
int main()

{int x,n;
    for(int x=1;x<=20;x++)
{printf("This is  table of %d \n",x);
for(int n=1;n<=10;n++)
    {
        printf(" %d x %d = %d \n",x,n,x*n);}
    printf("================\n");
}
return 0;	
}