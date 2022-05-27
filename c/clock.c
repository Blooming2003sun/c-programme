#include<stdio.h> 
#include<unistd.h>
#include<conio.h>
int main(void)
{
int i,j,k=0;
printf("this is a clock\n");
usleep(1000000);
printf("enter your time  as hh mm ss   ");
scanf("%d%d%d",&k,&i,&j);
while(1){
if(k==24)
{k=0;i=0;j=0;
}
else
{
for ( k=k;k<24;k++){
for ( i=i;i<60;i++){
for( j=j;j<60;j++ ){
printf("%d::%d::%d\n",k,i,j);
usleep(1000000);
//you can xhose any one
clrscr();
//system("clear");
}}}}}
return 0;	
}