/*Topic:-factorial
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<math.h>
int factorial(int);
int main(void)
{
   int n,x,i;
   double sum=0;
   printf("enter n and x\n");
   scanf("%d%d",&n,&x);
   for ( i = 1; i <=(n+2)/2; i++)
   {
      if(i%2!=0)
      sum+=pow(x,2*i-2)/factorial(2*i-2);
      else
      sum-=pow(x,2*i-2)/factorial(2*i-2);
   }
   printf("%lf",sum);
   return 0;
}
int factorial(int a)
{
   int fact=1,i=1;
   while(i<=a)
   {
      fact*=i;
      i++;
   }
   return fact;
}