/*Topic:-
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int old_num, copy, new_num = 0;
    printf("enter a 5 digit number\n");
    scanf("%d", &old_num);
    copy = old_num;
    new_num = old_num % 10;
    old_num /= 10;
    new_num = (new_num * 10) + old_num % 10;
    old_num /= 10;
    new_num = (new_num * 10) + old_num % 10;
    old_num /= 10;
    new_num = (new_num * 10) + old_num % 10;
    old_num /= 10;
    new_num = (new_num * 10) + old_num % 10;
    printf("new num is %d\n", new_num);
    if (copy == new_num)
    {
        printf("the numbers are equal\n");
    }
    else
    {
        printf("the numbers are not equal");
    }
    return 0;
}