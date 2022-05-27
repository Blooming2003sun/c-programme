/*Topic:-paper size
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    int side1=1189,side2=841,copy;
    printf("A0 has dimentions %d mm x %d mm\n",side1,side2);
    copy=side2;side2=side1/2;side1=copy;
    printf("A1 has dimentions %d mm x %d mm\n",side1,side2);
    copy=side2;side2=side1/2;side1=copy;
    printf("A2 has dimentions %d mm x %d mm\n",side1,side2);
    copy=side2;side2=side1/2;side1=copy;
    printf("A3 has dimentions %d mm x %d mm\n",side1,side2);
    copy=side2;side2=side1/2;side1=copy;
    printf("A4 has dimentions %d mm x %d mm\n",side1,side2);
    copy=side2;side2=side1/2;side1=copy;
    printf("A5 has dimentions %d mm x %d mm\n",side1,side2);
    copy=side2;side2=side1/2;side1=copy;
    printf("A6 has dimentions %d mm x %d mm\n",side1,side2);
    copy=side2;side2=side1/2;side1=copy;
    printf("A7 has dimentions %d mm x %d mm\n",side1,side2);
    copy=side2;side2=side1/2;side1=copy;
    printf("A8 has dimentions %d mm x %d mm",side1,side2);
    return 0;
}