/*Topic:-swap using call by refference
Author-Rudreswar_Pal*/
#include <stdio.h>
void swap(int *, int *);
int main(void)
{
    int a, b, *m = &a, *n = &b;
    printf("enter two number\n");
    scanf("%d%d", m, n);
    printf("before swap %d %d\n", *m, *n);
    swap(m, n);
    printf("after swap %d %d", *m, *n);
    return 0;
}
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

/*Topic:-string length
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    int a;
    char str1[]="hello\0hii\0\0\0\0\0";
    printf("%s\n",str);
    printf("%d\n",strlen(str));
    printf("%d\n",sizeof(str));
    return 0;
}

/*Topic:- string compare
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[] = "hello", str2[] = "hii";
    printf("%d", strcmp(str1, str2));
    return 0;
}

/*Topic:-string concatination
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="hello",str2[]=" dj imut";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}

/*Topic:-string copy
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="hello",str2[]="- dj imut";
    strcpy(str1,str2);
    printf("%s",str1);
    return 0;
}

/*Topic:-string reverse
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="hello";
    strrev(str1);
    printf("%s",str1);
    return 0;
}

/*Topic:-userdefined strlen
Author-Rudreswar_Pal*/
#include<stdio.h>
int ustrlen(char* a);
int main(void)
{
    char str1[10];
    scanf("%s",str1);
    printf("%d",ustrlen(str1));
    return 0;
}
int ustrlen(char *a)
{
    int i=0;
    while (*(a+i))
    {
        i++;
    }
    return i+1;
}

/*Topic:-userdefined strcpy
Author-Rudreswar_Pal*/
#include<stdio.h>
void ustrcpy(char* a,char*b);
int main(void)
{
    char str1[10],str2[]="hello";
    scanf("%s",str1);
    printf("%s\n",str1);
    ustrcpy(str1,str2);
    printf("%s\n",str1);
    return 0;
}
void ustrcpy(char *p,char *q)
{
    do
    {
       *p=*q;
       p++,q++;
    } while (*q);
}

/*Topic:-userdefined strcmp
Author-Rudreswar_Pal*/
#include <stdio.h>
int ustrcmp(char *a, char *b);
int main(void)
{
    char str1[] = "hello", str2[] = "hellohi";
    printf("%d", ustrcmp(str1, str2));
    return 0;
}
int ustrcmp(char *p, char *q)
{

    while (1)
    {
        if (*p == 0 && *q == 0)
            return 0;
        else
            while (*p != 0 || *q != 0)
            {
                if (*p > *q)
                    return 1;
                else if (*p < *q)
                    return -1;
                else
                {
                    p++, q++;
                }
            }
    }
}

/*Topic:-userdefined strcat
Author-Rudreswar_Pal*/
#include <stdio.h>
int ustrcat(char *a, char *b);
int main(void)
{
    char str1[] = "hello", str2[] = "rudra@456";
    ustrcat(str1, str2);
    printf("%s",str1);
    return 0;
}
int ustrcat(char *p, char *q)
{

    while(*p)
    p++;
   do
   {
       *p=*q;
        q++,p++;
   } while (*q);
   *p=0;
}
/*Topic:-userdefined strrev
Author-Rudreswar_Pal*/
#include <stdio.h>
void ustrrev(char *a);
int main(void)
{
    char str1[] = "hello", str2[] = "rudra@456";
    ustrrev(str2);
    printf("%s", str2);
    return 0;
}
void ustrrev(char *p)
{
    int i = 0;
    while (*(p + i))
        i++;
    int len = i ;
    i = 0;
    while (i < len - 1 - i)
    {
        char temp = *(p + i);
        *(p + i) = *(p + len - 1 - i);
        *(p + len - 1 - i) = temp;
        i++;
    }
}