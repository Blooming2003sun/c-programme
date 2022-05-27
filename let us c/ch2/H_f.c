/*Topic:-chill factor
Author-Rudreswar_Pal*/
#include <stdio.h>
#include<math.h>
int main(void)
{
    float wcf, t, v;
    printf("enter v and t\n");
    scanf("%f%f", &v, &t);
    wcf = 35.74 + 0.6251 * t + (0.4275 * t - 35.75)*pow(v,0.16);
    printf("wind chill factor is %f",wcf);
    return 0;
}