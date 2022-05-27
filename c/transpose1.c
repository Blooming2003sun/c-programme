#include<stdio.h>
#include<unistd.h>
int main(void){
    int a[2][3],i,j,b[3][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d   ",a[i][j]);
        } 
     printf("\n");
     }
        // transpose logic
   printf("the  transpose matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d   ",a[j][i]);
        } 
        printf("\n");
        
    }
       
    
    
   // printf("sum of matrix is %d ",sum);
    
return 0;	
}