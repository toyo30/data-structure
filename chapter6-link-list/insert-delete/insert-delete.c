#include <stdio.h> 
#include <stdlib.h> 
struct node
{
    int data;
    struct node *next;
};

struct node *insert_after(struct node *);
struct node *before_after(struct node *);

int main()
{   
    struct node *head = malloc(sizeof(struct node));
    

    struct node *node1 = malloc(sizeof(struct node));
    head->next = node1;
    node1->data = 10;
    
    
    struct node *node2 = malloc(sizeof(struct node));
    
    node1->next = node2;
    
    node2->data = 30;

    node2 ->next = NULL;

    struct node *ptr = head->next;

    while(ptr != NULL)
    {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    }

    insert_after(head);

    return 0;
}



struct node *insert_after(struct node * start)
{
    struct node *curr, *preptr, *new_node;
    int val = 15;
    int num = 10;

    curr = start;
    preptr = start;

    while(curr != NULL)
    {
        if(curr->data == num)
            break;
    }


}

struct node *delete_after(struct node * start)
{

}