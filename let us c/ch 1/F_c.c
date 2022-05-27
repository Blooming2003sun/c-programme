/*Topic:-mark calculation
Author-Rudreswar_Pal*/
#include<stdio.h>
int main(void)
{
    float marks1,marks2,marks3,marks4,marks5,marks_total;
    printf("Enter the marks in 1st subject \n");
    scanf("%f",&marks1);
    printf("Enter the marks in 2nd subject \n");
    scanf("%f",&marks2);
    printf("Enter the marks in 3rd subject \n");
    scanf("%f",&marks3);
    printf("Enter the marks in 4th subject \n");
    scanf("%f",&marks4);
    printf("Enter the marks in 5th subject \n");
    scanf("%f",&marks5);
    marks_total=marks1+marks2+marks3+marks4+marks5;
    printf("Total marks = %.2f\n",marks_total);
    printf("you got %.2f %%",marks_total/5);
    return 0;
}