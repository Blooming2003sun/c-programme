#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{int row,clm;
printf("enter no of row\n");
scanf("%d",&row);
printf("enter no of colun\n");
scanf("%d",&clm);
//system("clear");
//clrscr();
for(int i=0;i<row;i++){
    for(int j=0;j<clm;j++){
        printf("*");}
        printf("\n");}
    
    
return 0;	
}