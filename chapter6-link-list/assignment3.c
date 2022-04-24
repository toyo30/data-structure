#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *insert_after(struct node *);
struct node *delete_after(struct node *);

int main()
{
    struct node *head = malloc(sizeof(struct node));

    struct node *node1 = malloc(sizeof(struct node));
    head->next = node1;
    node1->data = 10;
    node1->prev = head;

    struct node *node2 = malloc(sizeof(struct node));
    node1->next = node2;
    node2->data = 20;
    node2->prev = node1;

    node2->next = NULL;

    struct node *curr = head->next;
    
    while(curr != NULL)
    {
        printf("\n%d", curr->data);
        curr = curr->next;
    }


    insert_after(head);
    delete_after(head);

    curr = head->next;

     while(curr != NULL)
    {
        printf("\n%d", curr->data);
        curr = curr->next;
    }

    return 0;
}


struct node *insert_after(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int num, val;

    printf("\n Enter the data : ");
    scanf("%d", &num);

    printf("\n Enter the val after which the data has to be inserted : ");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    ptr = start;
    preptr = ptr;

    
    while(preptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    

    preptr->next = new_node;//node1->next 가 new_node
    new_node->next = ptr;//new_node->next가 node2

    ptr->prev = new_node;//node2->prev = new_node
    new_node->prev = preptr;//new_node->prev = preptr

    return start;
}


struct node *delete_after(struct node *start)
{
    struct node *ptr, *preptr, *nextptr;
    int val;
    printf("\n Enter the value after which the data has to be deleted : ");//후에 저장될 데이터
    scanf("%d", &val);

    ptr = start;
    preptr = ptr;
    nextptr = ptr;
    while(preptr->data !=val)
    {   
        preptr = ptr;
        ptr = ptr -> next;
        nextptr = ptr -> next;
    }

    
    preptr->next = ptr->next;
    
    nextptr->prev = ptr->prev;

    free(ptr);



    return start;
}