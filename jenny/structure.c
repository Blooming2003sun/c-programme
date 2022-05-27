/*Topic:-introduction to structur
Author-Rudreswar_Pal*/
#include<stdio.h>
 struct student
{
    char name[20];
    int roll_no;
    float marks;
};
int main(void)
{
   
   struct student s1[3];        
  for (int i = 0; i < 3; i++)
  {
      printf("enter details of s%d \n",i+1);
      scanf("%s %d %f",&s1[i].name,&s1[i].roll_no,&s1[i].marks);
  }
   for (int i = 0; i < 3; i++)
  {
     printf("%s %d %f",s1[i].name,s1[i].roll_no,s1[i].marks);
  }
  
  
    
    return 0;
}