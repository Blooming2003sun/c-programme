#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s,area;
    printf("enter  three sides of the  triangle \n");
    scanf("%f %f %f",&a,&b,&c );
    
    s=(a+b+c)/2;
    area=pow(s*(s-a)*(s-b)*(s-c),0.5);
    printf("the area of the given triangle is %f ",area);
	return 0;
}