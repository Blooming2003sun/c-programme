#include<stdio.h>
int main(void)
{
     int n,i,count=0,j,k,value=0;
     printf("enter number\n");
     scanf("%d",&n);
   
    for(k=0;k<=n;k++)
    {
       for(i=0;i<= k;i++)
       {
             if (k%i==0)
                 count+=1;
        }
       if(count==2)
            printf("%d is  prime  \n",k);
      //  else
    //  printf("%d  is not  prime \n",k);
    //  printf("%d    count is %d \n ",count );
     count =0;
     }
     return 0;	
}