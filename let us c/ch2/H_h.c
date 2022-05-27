/*Topic:-swap two number
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    ///with third variable
    int C,D,E;
    printf("enter the value in C and D\n");
    scanf("%d%d",&C,&D);
    E=D;
    D=C;
    C=E;
    // //without third variable
    // C=C+D;
    // D=C-D;
    // C=C-D;
    printf("the value in C and D is %d and %d ",C,D);

    return 0;
}