#include<stdio.h>
float avg(int [],int);
int main(void)
{   
    float avarage;
    int marks[5]={3,3,2,4,5},size;
    size=sizeof(marks)/sizeof(marks[0]);    
    avarage=avg(marks,size);
    printf("inside main array size %d \n",sizeof(marks));
    printf("AVARAGE = %.2f \n",avarage);

    return 0;
}
float avg(int marks1[],int z)
{
    float sum=0;
    for(int i=0;i<z;i++)
    {
        sum+=marks1[i];
    }
    printf("\n inside function array size %d ",sizeof(marks1));

    return sum/z;


}