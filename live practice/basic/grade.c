#include <stdio.h>
int main()
{
    float number;
    printf("enter your number out of 100 \n ");
    scanf("%f", &number);
    if (number <= 100 && number >= 90)
        printf("your grade is  O\n");
    else if (number <= 100 && number >= 80)
        printf("your grade is  E\n");
    else if (number <= 100 && number >= 70)
        printf("your grade is  A\n");
    else if (number <= 100 && number >= 60)
        printf("your grade is  B\n");
    else if (number <= 100 && number >= 50)
        printf("your grade is  C\n");
    else if (number <= 100 && number >= 40)
        printf("your grade is  E\n");
    else if (number <= 40 && number >= 0)
        printf("your grade is  f (failed) \n");
    else
        printf("enter a valid number");

    return 0;
}