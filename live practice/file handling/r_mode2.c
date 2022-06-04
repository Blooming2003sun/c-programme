/*Topic:- r mode in c
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    char file_name[30], str[50];
    printf("enter the name of the file name you want to read\n");
    scanf("%29s", file_name);
    FILE *fp = NULL;
    fp = fopen(file_name, "r");
    if (fp == NULL)
        printf("unable to read file\n");
    else
    {
        printf("=======================\n");
        while (!feof(fp))
        {
            fgets(str, 50, fp);
            printf("%s", str);
        }
        fclose(fp);
        printf("=========================");
    }
    return 0;
}