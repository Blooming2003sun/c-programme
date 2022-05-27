/*Topic:-append mode in c
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp=NULL;
    char str[30];
    printf("enter string you want to append\n");
    gets(str);
    fp=fopen("dj.txt","a");
    if(fp=NULL)
    {
    printf("error\n");
    exit(1);
    }
    fputs(str,fp);
    fclose(fp);
    return 0;
}