#include<stdio.h>
char* return_a_string()
{
  static char str[]="rudreswar";
    return str;
}
int main(void)
{
    char* str;
    str =return_a_string();
    str[0]='k';
    printf("%s",str);
    return 0;
}