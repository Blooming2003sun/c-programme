#include<stdio.h>
int main(void){
    int arr1[5] ,i,arr2[5] ,sumarr[5] ;
    printf("enter first array elements\n");
    for( i=0;i<5;i++)
    scanf("%d",&arr1[i]);
    printf("enter second array elements\n");
    for( i=0;i<5;i++)
    scanf("%d",&arr2[i]);
     for( i=0;i<5;i++)
     {sumarr[i]=arr1[i]+arr2[i];
     printf("the sum of two arrays in index %d is %d\n",i,sumarr[i]);}
return 0;	
}