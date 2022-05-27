#include<stdio.h>
#include<math.h>
int main(){
 int n;
 float y,x;
 
 printf( "enter the value of x and n \n");
 scanf("%f %d",&x,&n);
 if(n ==1)
 y=1+pow(x,2);
 else if(n ==2)
 y=1+(x/n);
 else if(n==3)
 y=1+(2*x);
 else if(n>3 || n<1)
 y=1+ (n*x);
 else 
 {
 }
 printf("y = %f",y);
 return 0;
    
}