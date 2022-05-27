/*Topic:-
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    char a;
    printf("enter a charecter\n");
    scanf("%c", &a);
    if (a >= 0 && a <= 127)
    {
        if (a >= 65 && a <= 90)
        {
            printf("you entered capital letter\n");
        }
        else if (a >= 97 && a <= 122)
        {
            printf("you entered small letter\n");
        }
        else if (a >= 48 && a <= 57)
        {
            printf("you entered a number\n");
        }
        else
            printf("you entered a special symbol\n");
    }
    else
    {
        printf("wrong input\n");
    }
    return 0;
}