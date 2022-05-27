/*Topic:-factorial of given number using loop
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int number, factorial = 1, i;
    printf("enter the number\n");
    scanf("%d",&number);
    if (number < 0)
        printf("Enter valid number");
    else if (number == 0 || number == 1)
        printf("Factorial of %d = %d\n", number, factorial);
    else
    {
        for (i = 1; i <= number; i++)
            factorial *= i;
        printf("Factorial of %d = %d\n", number, factorial);
    }
    return 0;
}