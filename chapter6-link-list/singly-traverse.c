#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

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




    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    int count = 0;
    ptr = start;
    while(ptr != NULL)
    {
        count += 1;
        printf(" %d 데이터값, %d 포인터 순서 ->", ptr->data, count);
        ptr = ptr->next;
        count++;
    };


    return 0;
}