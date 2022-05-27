#include<stdio.h>
void patern(int);
int min(int,int,int,int);
int main(void)
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    patern(n);  
    return 0;
}
void patern(int n)
{
    if(n<=0);
     for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            int c = min(i,j,2*n-i,2*n-j);
           printf(" %d ",n-c+1);
        }
        printf("\n");
    }
}
int min(int a,int b,int c,int d)
{
    int result;
    if(a<=b && a<=c && a<=d)
    result =a;
    else if(b<=a && b<=c && b<=d)
    result =b;
    else if(c<=a && c<=b && c<=d)
    result =c;
    else if (d<=a && d<=b && d<=c)
    result =d;
    return result;


}