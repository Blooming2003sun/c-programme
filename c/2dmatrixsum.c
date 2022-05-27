#include<stdio.h>
#include<unistd.h>
int main(void){
    int a[2] [3],i,j,sum=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {  
            sum+=a[i][j];
            printf("%d   ",a[i][j]);
        } 
        printf("\n");
    }
    printf("sum of matrix is %d ",sum);
    
return 0;	
}