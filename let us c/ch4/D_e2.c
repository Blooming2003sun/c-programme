#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, sum, max, _2nd_max, _3rd_max;
    printf("enter  3 side \n");
    scanf("%d %d %d", &a, &b, &c);
    // defining largest side
    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
    {
        max = c;
    }
    sum = a + b + c;
    // condition checking
    if ((sum - max) > max)
    {
        printf("Triangle can be done \n");
        // side defining
        if ((a >= b || a >= c) && a != max)
            _2nd_max = a;
        else if ((b >= a || b > c) && b != max)
            _2nd_max = b;
        else
        {
            _2nd_max = c;
        }
        _3rd_max = (sum - max - _2nd_max);

        // type defining
        if ((max != _2nd_max) && (max != _3rd_max) && _2nd_max != _3rd_max)
        {
            if (pow(max, 2) == (pow(_2nd_max, 2) + pow(_3rd_max, 2)))
            {
                printf("Its a right angled triangle");
            }
            else
            {
                printf("Its a scale triangle");
            }
        }
        else if ((max == _2nd_max) && (max == _3rd_max))
        {
            printf("Its a equilateral triangle");
        }
        else
        {
            printf("Its a isoscale triangle");
        }
    }
    else
    {
        printf("Triangle can  not be done \n");
    }

    // printf("%d %d %d",max,_2nd_max,_3rd_max);

    return 0;
}