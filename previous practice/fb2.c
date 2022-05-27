#include<stdio.h>
int main(void)
{
    int n,i;
    long long b=1,c=1,d;
    printf("enter a number \n");
    scanf("%d",&n);
    if(n<=0)
    d=-1;
    else{
    for(i=1;i<=n;i++ )
    {
        if(i==1)
        d=0;
        else if (i==2)
        d=1;
         else if (i==3)
        d=1;
        else
        {
            d=b+c;
            c=b;
            b=d;   
        }
        
    }
    }
    printf("%Li",d);
    return 0;
}
