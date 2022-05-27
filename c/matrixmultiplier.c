#include<stdio.h>
int main(void){
    printf("enter elements of first matrix \n");
    int a[3][3],b[3][3],c[3][3],i,j,sum,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of second matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //3rd matrix 
      for(i=0;i<3;i++){        
        for(j=0;j<3;j++){
         sum=0;
         for(k=0;k<3;k++){         
         sum +=a[i][k]*b[k][j];
        }
        c[i][j]=sum;     
    }
    
    }
     //printing the matrix a
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf ("%d \t",a[i][j]);
        }
        printf("\n");
    }
     //printing the matrix b
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf ("%d \t",b[i][j]);
        }
        printf("\n");
    }
    
       //printing the matrix c
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf ("%d \t",c[i][j]);
        }
        printf("\n");
    }
   
return 0;	
}