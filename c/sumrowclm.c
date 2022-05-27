#include<stdio.h>
int main(void){
    int a[3][3],i,j,sumrow,sumclm;
    printf("enter the elements of matrix\n");
    //scaning the input elements
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //printing the matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf ("%d \t",a[i][j]);
        }
        printf("\n");
    }
    //sum of rows and columns
    for(i=0;i<3;i++)
    {sumrow=0;
    sumclm=0;
        for(j=0;j<3;j++)
        {           
           sumrow+=a[i][j];
           sumclm+=a[j][i];
        }
         //printing sum row and sum column
    printf("sumrow%d is %d || sumclm%d is %d\n",i+1,sumrow,i+1,sumclm);
    }
   
    
    
return 0;	
}