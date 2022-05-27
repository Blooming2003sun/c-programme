/*Topic:-young of three
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int ram, shyam, ajay;
    printf("enter age of ram\n");
    scanf("%d", &ram);
    printf("enter age of shyam\n");
    scanf("%d", &shyam);
    printf("enter age of ajay\n");
    scanf("%d", &ajay);
    if (ram > shyam)
    {
        if(ajay>shyam)
        printf("shyam is young\n");
        else
        printf("ajay is young\n");
    }
    else
    {
        if(ram>ajay)
        printf("ajay is young\n");
        else
        printf("ram is young\n");

    }

    return 0;
}