#include<stdio.h>
//this is Euclidian algorithm for gcd
int main(void){
    int a,b,c ;
    printf(" enter 2 number\n");
    scanf("%d%d",&a,&b);
   for(c=a;c!=0;){
        c=a%b;
        a=b;
        b=c;
       // printf("%d cycle done\n ",i++);
   }
    printf("gcd is %d ",a);
return 0;	
}