/*Topic:-2d array
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int *p=&a[0][0];
    printf("%d",*(*a+6));
    //printf("%d",*p);
    return 0;
}