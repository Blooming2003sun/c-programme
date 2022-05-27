/*Topic:-ptr test
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int a[3]={1,2,3},*p=a,*q=p;
    printf(" p= %u\n",p);
    printf(" q= %u\n",p);
    p++;
    printf("%u\n",p);
    p--;
    printf("%u\n",p);
    p=p+2;
    printf(" p =%u\n",p);
    q=q+(p-q)/2;
    printf("%u\n",q);

    return 0;
}