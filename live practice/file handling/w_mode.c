/*Topic:-file handling in r mode
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp = NULL;
    int i, num = 55;
    float dec = 34;
    char str[20];
    printf("enter the string\n");
    gets(str);
    fp = fopen("rudra.txt", "w");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    // //this is for writing a charecter  fputc()
    // fputc(str[2],fp);
    // // this is for writing a string using fputc()
    // for ( i = 0; i <= strlen(str); i++)
    // {
    //     fputc(str[i],fp);
    // }
    // this is for formatted input to file
    fprintf(fp, "your string is %s\nint is %d\nfloat is %f", str, num, dec);
    fclose(fp);
    printf("success");
    return 0;
}