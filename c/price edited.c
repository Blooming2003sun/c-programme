#include<stdio.h>
int main()
{float purchase,net_amount,discount;
char ch;
//printf("Enter your name\n");
printf("what to buy:\n press ( L )for laptop and  press ( D )for desktop PC\n");
scanf("%c",&ch);
printf("enter amount of your purchase \n");
scanf("%f",&purchase);
if(purchase>0)
{
 switch (ch)
      {
        case 76: 
        if (purchase>100000)
        discount=10;
        else if (purchase>50000)
        discount=7.5;
        else if(purchase>25000)
        discount=5;
        else
        {
            discount=0;
        }
        net_amount=purchase*(100-discount)/100;
        printf("You have to pay %.2f",net_amount);
        break;
        
        case 68:
        if (purchase>100000)
        discount=15;
        else if (purchase>50000)
        discount=10;
        else if(purchase>25000)
        discount=7.5;
        else
        {
            discount=5;
         }
         net_amount=purchase*(100-discount)/100;
         printf("You have to pay %.2f",net_amount);
        break;
        
        default:
        printf("plz chose right option what to buy \n");
        break;
    }
}
else
{
    printf("enter right amount \n");
}
return 0;	
}