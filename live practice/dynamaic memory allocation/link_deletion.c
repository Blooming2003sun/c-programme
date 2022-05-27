/*Topic:-linklist deletion
Author-Rudreswar_Pal*/
#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *ptr;
} linklist;
linklist *creatlist(void);
void display(linklist *);
void del_from_end(linklist *);
linklist* del_from_big(linklist*);
linklist* del_from_pos(linklist*,int);

int main(void)
{
    linklist *head;
    head = creatlist();
    display(head);
    del_from_end(head);
    head=del_from_pos(head,5);
    printf("\n");
    display(head);
    return 0;
}
linklist *creatlist(void)
{
    int choice = 1;
    linklist *head = NULL, *nextptr, *temp;
    while (choice)
    {
        nextptr = (linklist *)malloc(sizeof(linklist));
        printf("enter data\n");
        scanf("%d", &nextptr->data);
        nextptr->ptr = NULL;
        if (head == NULL)
        {
            head = temp = nextptr;
        }
        else
        {
            temp->ptr = nextptr;
            temp = nextptr;
        }
        printf("do you want to continue (0/1)\n");
        scanf("%d", &choice);
    }
    return head;
}
void display(linklist *head)
{
    linklist *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->ptr;
    }
}
void del_from_end(linklist *head)
{
    linklist *temp = head, *temp2;
    while (temp->ptr != 0)
    {
        temp2=temp;
        temp = temp->ptr;
    }
    if(temp==head)
    head=0;
    else
    temp2->ptr=0;
    free(temp);
}
linklist* del_from_big(linklist*head)
{
    linklist*temp=head;
    head=head->ptr;
    free(temp);
    return head;
}
linklist* del_from_pos(linklist* head,int pos)
{
    linklist*temp1=head,*temp2;
    int i=1;
    if(pos==1)
    {
        return del_from_big(head);
    }
    else
    {
        while(i<pos)
        {
            temp2= temp1;
            temp1=temp1->ptr;
            i++;
        }
        temp2->ptr=temp1->ptr;
        free(temp1);
        return head;

    }

}