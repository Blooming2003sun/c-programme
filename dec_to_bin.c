/*Topic:-decimal to binary
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int arr[32]={0},dec,bin,temp;
    printf("enter decimal value\n");
    scanf("%d",&dec);
    temp=dec;
    for (int i = 31; i >=0; i--)
    {
        if(dec/(int)pow(2,i))
        {
        dec=dec-pow(2,i);
        arr[i]=1;
        }    
    }
    for (int i = 31; i >=0; i--)
    {
        if((i+1)%4==0)
        printf(" ");
        printf("%d",arr[i]);
        
    }
    return 0;
}