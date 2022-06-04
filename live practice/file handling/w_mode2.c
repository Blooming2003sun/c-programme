/*Topic:- r mode in c
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int ctrl = 1;
    char str[50], file_name[20];
    printf("enter the file name\n");
    scanf("%19s", file_name);
    fp = fopen(file_name, "w");
    if (fp == NULL)
    {
        printf("file not found");
        exit(1);
    }
    printf("enter what you want to write\n");
    do
    {
        fflush(stdin);
        fgets(str, 50, stdin);
        fputs(str, fp);
        printf("press 1 to write or 0 to exit\n");
        scanf("%d",&ctrl);
    } while (ctrl);
    fclose(fp);
    return 0;
}