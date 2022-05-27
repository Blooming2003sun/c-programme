/*Topic:-introduction to array
Author-Rudreswar_Pal*/
#include<stdio.h>
#define SZ 50
int main(void)
{
  int arr[SZ],SIZE,pos,elmnt;
  printf("enter the size of the array\n");
  scanf("%d",&SIZE);
  if(SIZE>SZ)
  printf("size is too big");
  else
  {
    printf("enter the elements of the array\n");
    for (int i = 0; i < SIZE; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("the elements of the array are as follows\n");
    for (int i = 0; i < SIZE; i++)
    {
      printf("%d  ",arr[i]);
    }

    //inserting a data in array
    printf("\nenter the position where you want to add the element\n");
    scanf("%d",&pos);
    if(pos<=0||pos>SIZE||SIZE==SZ)
    printf("invalid request\n");
    else
    {
      printf("enter the element to insert \n");
      scanf("%d",&elmnt);
      for (int i = SIZE-1; i >= pos-1; i--)
      {
        arr[i+1]=arr[i];
      }
      arr[pos-1]=elmnt;
      SIZE++;
      //printing new array
      printf("the elements of the array are as follows\n");
      for (int i = 0; i < SIZE; i++)
      {
        printf("%d  ",arr[i]);
      }
    }
    //deletation of array
    printf("\nenter the position where you want to delete element\n");
    scanf("%d",&pos);
    if(pos<=0||pos>SIZE)
    printf("invalid request\n");
    else
    {
      for (int i = pos-1; i<SIZE; i++)
      {
        arr[i]=arr[i+1];
      }
      SIZE--;
    }
    //printing new array
    printf("the elements of the array are as follows\n");
    for (int i = 0; i < SIZE; i++)
    {
      printf("%d  ",arr[i]);
    }
    
  }

  return 0;
}