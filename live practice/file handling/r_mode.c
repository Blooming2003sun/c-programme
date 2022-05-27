/*Topic:-
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp = NULL;
    char str[10], ch;
    // // using fgets()
    // fp = fopen("rudra.txt", "r");
    // if (fp == NULL)
    // {
    //     printf("error\n");
    //     exit(1);
    // }
    // while (!feof(fp))
    // {
    //     fgets(str, 9, fp);
    //     printf("%s", str);
    // }
    // fclose(fp);
    
    // using fgetc()
    fp = fopen("rudra.txt", "r");
    if (fp == NULL)
    {
        printf("error\n");
        exit(1);
    }
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}