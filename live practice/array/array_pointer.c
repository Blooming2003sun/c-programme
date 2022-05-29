/*Topic:-array pointer
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int arr[5],i,*p,*q;
    p=arr;
    printf("enter the elements of the array\n");
    for ( i = 0; i < 5; i++)
        scanf("%d",&p[i]);
    printf("the elements of the array are\n");
    for ( i = 0; i < 5; i++)
        printf("%d\t",i[p]);
    return 0;
}