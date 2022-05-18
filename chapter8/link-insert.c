#include <stdio.h>
#include <stdlib.h>
#define MAX 10//


void display(void);

struct node
{
    int data;
    struct node *next;
};

struct node *enqueue(struct node *);
struct node *dequeue(struct node *);

int front = -1, rear = -1;

int main(void)
{
    struct node *head = malloc(sizeof(struct node));
    enqueue(head);
    enqueue(head);
    enqueue(head);
    dequeue(head);
    
    display();
    return 0;
}

struct node *enqueue(struct node *start)
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
    

    free(ptr);


    return start;
}