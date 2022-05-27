#include<stdio.h>
#include<conio.h>
int main()
{
    float purchase,discount,net_amount;
    char input;
    char name[15];
    printf("what to buy:\n press ( L )for laptop and  press ( D)for desktop PC\n");
    scanf("%c",&input);
    printf("Enter name of the purchaser : \n");
    scanf("%s",name);
    printf("Enter amount of your purchase: \n");
    scanf("%f",&purchase);
    clrscr();g
    printf("Hey , %s",name);
    
    if(purchase>0)
    {/*printf("what to buy:\n press ( L )for laptop and  press ( D)for desktop PC\n");
    scanf("%c",&input);*/
     printf("%c\n",name);
     switch (input)
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
        printf("plz chose right option \n");
        break;
    }
    }
    else
   { printf("enter right amount");}
    return 0;
    }