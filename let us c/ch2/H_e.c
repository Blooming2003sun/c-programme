/*Topic:-distance between two points
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    float L1,L2,G1,G2,D;
    printf("enter L1,L2\n");
    scanf("%f%f",&L1,&L2);
    printf("enter G1,G2\n");
    scanf("%f%f",&G1,&G2);
    D=3963*acos((sin(L1)*sin(L2))+(cos(L1)*cos(L2)*cos(G2-G1)));
    printf("the distance in naughtical miles is %d",D);


    return 0;
}