/*Topic:-steel grade
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int grade, hardness, strength;
    float carbon;
    printf("enter the hardness \n");
    scanf("%d", &hardness);
    printf("enter the carbon content \n");
    scanf("%f", &carbon);
    printf("enter the tensile strength \n");
    scanf("%d", &strength);
    if (hardness > 50 && carbon < 0.7 && strength > 5600)
        grade = 10;
    else if (hardness > 50 && carbon < 0.7)
        grade = 9;
    else if (carbon < 0.7 && strength > 5600)
        grade = 8;
    else if (hardness > 50 && strength > 5600)
        grade = 7;
    else if (hardness > 50 || carbon < 0.7 || strength > 5600)
        grade = 6;
    else
    grade=5;

    printf("grade of steel is %d",grade);
    return 0;
}