#include<stdio.h>
int main()
{float unit,price=0;
printf("Enter your electricity consumption in bot \n ");
scanf("%f",&unit);
if(unit>0)
{
  if(unit<=200 )
  {price=unit*0.5;}
  if(unit>200 && unit<=400)
  {price=100+(unit-200)*0.65;}
  if(unit>400 && unit<=600)
  {price=250+(unit-400)*0.80;}
  if(unit>600)
  { price=425+(unit-600)*1.25;}
  printf("you have to pay %0.2f \n ",price);
   

}
else
{printf("invalid unit \n");}
return 0;	
}