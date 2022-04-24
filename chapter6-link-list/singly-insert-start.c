#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *insert_first(struct node *);
struct node *delete_first(struct node *);


int main(void)
{
    struct node *start = malloc(sizeof(struct node));
    start->data = 0;

    struct node *node1 = malloc(sizeof(struct node));
    start->next = node1;
    node1->data = 10;
    
    struct node *node2 = malloc(sizeof(struct node));
    node1->next = node2;
    node2->data = 20;

    struct node *node3 = malloc(sizeof(struct node));
    node2->next = node3;
    node3->data = 30;

    node3->next = NULL;

    struct node *ptr = malloc(sizeof(struct node));

    ptr = start;

    printf("-------------origin--------\n");
    while(ptr != NULL)
    {
        printf(" %d, %p ->", ptr->data, ptr);
        ptr = ptr->next;
    }

    printf("\n-------------insert--------\n");

    insert_first(start);

    printf("%d", new_node->data);

    return 0;
}


struct node *insert_first(struct node *start)
{
    struct node *new_node, *ptr;

    new_node = (struct node*)malloc(sizeof(struct node));
    ptr = (struct node*)malloc(sizeof(struct node));
    new_node->data = 5;

    new_node->next = start;


    ptr = new_node;
    while(ptr != NULL)
    {
        printf(" %d, %p ->", ptr->data, ptr);
        ptr = ptr->next;
    }

    return start;
}

struct node *delete_first(struct node *start)
{
    struct node *ptr;


    return start;
}