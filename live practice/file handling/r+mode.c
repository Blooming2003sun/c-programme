/*Topic:- r+mode in c
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char ch,str[30];
    FILE *fp=NULL;
    fp=fopen("dj.txt","r+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("your existing data is\n=========================\n");
    while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
    rewind(fp);
    printf("\nenter string you want to write\n");
    gets(str);
    fputs(str,fp);
    rewind(fp);
    printf("your final data is\n=========================\n");
    while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
    return 0;
}