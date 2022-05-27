/*Topic:-
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    float cyan,magenta,yellow,white,black,max;
    int red,green,blue;
    printf("enter red value\n");
    scanf("%d",&red);
    printf("enter green value\n");
    scanf("%d",&green);
    printf("enter blue value\n");
    scanf("%d",&blue);
    if(red==0&&blue==0&&green==0)
    {
        cyan=magenta=yellow=0;
        black=1;
    }
    else
    {
    if (red >= blue && red >= green)
        max = red;
    else if (blue >= red && blue >= green)
        max = blue;
    else if (green >= blue && green >= red)
        max = green;
    white=max/255;
    cyan=(white-(red/255.0))/white;
    magenta=(white-(green/255.0))/white;
    yellow=(white-(blue/255.0))/white;
    black=1-white;
    }
    printf("your CMYK values are %.3f %.3f %.3f %.3f",cyan,magenta,yellow,black);



    return 0;
}