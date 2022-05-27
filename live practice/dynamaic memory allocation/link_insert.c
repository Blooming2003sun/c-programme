/*Topic:-linklist practice
Author-Rudreswar_Pal*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *ptr;
} linklist;
linklist*creatlist(void);
void display(linklist *);
linklist* insert_at_begin(linklist*,int);
void insert_at_end(linklist*,int);
void insert_at_pos(linklist*,int,int);
int sizeoflinklist(linklist*);

int main(void)
{
    linklist *head;
    head = creatlist();
    display(head);
    printf("\n");
    // head=insert_at_begin(head,5);
    insert_at_pos(head,4,56);
    display(head);
    printf("\n%d\n",sizeoflinklist(head));
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
linklist* insert_at_begin(linklist*head,int a)
{
    linklist*newlist;
    newlist=(linklist*)malloc(sizeof(linklist));
    newlist->data=a;
    newlist->ptr=head;
    head=newlist;
    return head;
}
void insert_at_end(linklist* head,int a)
{
    linklist*newptr,*temp=head;
    while(temp->ptr!=NULL)
    temp=temp->ptr;
    newptr=(linklist*)malloc(sizeof(linklist));
    newptr->data=a;
    newptr->ptr=NULL;
    temp->ptr=newptr;
   
}
void insert_at_pos(linklist*head,int pos,int d)
{
    int i=1;
    if(pos>sizeoflinklist(head))
    printf("insertion not possible as linklist has only %d elements",sizeoflinklist(head));
    else
    {
        linklist*temp1=head,*new_node;
        new_node=(linklist*)malloc(sizeof(linklist));
        new_node->data=d;
        while(i<pos)
        {
            temp1=temp1->ptr;
            i++;
        }
        new_node->ptr=temp1->ptr;
        temp1->ptr=new_node;
    }
}
int sizeoflinklist(linklist*head)
{
    int count=1;
    linklist*temp;
    temp=head;
    while(temp->ptr!=NULL)
    {
        temp=temp->ptr;
        count++;
    }
    return count;
}


