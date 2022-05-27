#include <stdio.h>
int main(void)
{
    int i,j,arr[5] = {3, 6, 2, 9, 0},temp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}