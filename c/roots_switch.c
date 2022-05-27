#include <stdio.h>
#include<math.h>

int main()
{ int x,y;
  float a,b,c,discriminant,root1,root2;
  printf("ax²+bx+c=0 \n");
  printf("enter a , b , c \n ");
  scanf("%f %f %f,",&a,&b,&c);
  discriminant=(b*b)-4*a*c;
  x=(discriminant>=0);
  y=(discriminant==0);
  switch(x)
   {
    case 1:
    {
        switch(y)
        {
           case 1 :
           { root1= -b/(2*a);
            printf("root is %f \n",root1);
            break;
           }
           default:
           {root1=(-b+sqrt(discriminant))/(2*a);
           root2=(-b-sqrt(discriminant))/(2*a);
           printf("root1 = %f\n root2= %f\n",root1,root2);
           break;
           }
        }
        break;
    }
       default:
       {
           discriminant= -discriminant;
           root1=-b/(2*a);
           printf("root1=%.3f + i %.3f\n",root1,sqrt(discriminant)/(2*a));
           printf("root2=%.3f - i %.3f",root1,sqrt(discriminant)/(2*a));
    break;
    }
    }
return 0;	
}