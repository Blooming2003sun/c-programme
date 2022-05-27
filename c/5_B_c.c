#include<stdio.h>
#include<math.h>
int main(void){
    int a,b,i=0,result=1;
    scanf("%d%d",&a,&b);
    while(i<b){
        result*=a;
        i++;
        
        }
    
    printf("%d",result);
    
return 0;	
}