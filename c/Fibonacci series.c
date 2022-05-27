#include<stdio.h>
int main(void)
{ signed long long  b=1,c=0,d=0;
while(d>=0){
printf("  (  %Lu   )\n ",d);
d=c+b;
b=c;
c=d;
//printf("%ld \n ",a);
}
return 0;	
}