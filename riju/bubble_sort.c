/*Topic:-bubble sort
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int n,flag=0;
    printf("enter no of element\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("before sorting elements are :\n");
    for (int i = 0; i < n; i++)
        printf("%d  ",arr[i]);
    printf("\n");
    // //sorting bubble code assending
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             int temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //         for (int i = 0; i < n; i++)
    //         printf("%d  ",arr[i]);
    //         printf("\n");
    //     }
        
    // }
    //modified bubble sorting code assending
    for (int i = 0; i < n-1; i++)
    {
        flag=0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
            
        }
        if(flag==0)
        break;
        for (int i = 0; i < n; i++)
            printf("%d  ",arr[i]);
            printf("\n");
            
    }
    // printf("after sorting elements are :\n");
    // for (int i = 0; i < n; i++)
    //     printf("%d  ",arr[i]);    
    return 0;
}