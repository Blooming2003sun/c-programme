// program to print table from 1 to 20
#include <stdio.h>
int main(void)

{
    int x, n;
    for (x = 1; x <= 20; x++)
    {
        printf("This is  table of %d \n", x);
        for (n = 1; n <= 10; n++)
        {
            printf(" %d x %d = %d \n", x, n, x * n);
        }
        printf("================\n");
    }
    return 0;
}