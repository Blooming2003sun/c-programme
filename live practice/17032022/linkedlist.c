/*Topic:-implementation of linked list
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int choice = 1, count = 0;
    struct node
    {
        int data;
        struct node *ptr;
    };
    struct node *head = NULL, *new_node, *temp;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d", &new_node->data);
        new_node->ptr = NULL;
        if (head == NULL)
            head = temp = new_node;
        else
        {
            temp->ptr = new_node;
            temp = new_node;
        }
        printf("do you want to continue(0/1)\n");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != NULL)
    {

        printf("%d \t", temp->data);
        temp = temp->ptr;
        count++;
    }
    printf("\ntotal no of element is %d",count);
    return 0;
}