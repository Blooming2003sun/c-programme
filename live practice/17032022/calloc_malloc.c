/*Topic:-memmory allocation
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *intptr;
    float *fltptr;
    intptr=(int*)calloc(5,sizeof(int));
    printf("enter 5 int value\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",intptr+i);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*(intptr+i));
    }
    free(intptr);
    fltptr=(float*)malloc(10*sizeof(float));
    printf("\nenter 10 float \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f",fltptr+i);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%f",*(fltptr+i));
    }
    
    
    return 0;
}