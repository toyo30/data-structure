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




    struct node *ptr, *pos;
    ptr = (struct node *)malloc(sizeof(struct node));
    pos = (struct node *)malloc(sizeof(struct node));
    
    int val;
    

    printf("탐색하고 싶은 값을 입력하시오:");
    scanf("%d", &val);

    ptr = start;
    while(ptr != NULL)
    {
        if(ptr->data == val)
        {   pos = ptr;
            break;
        }
        else
        {
            ptr = ptr->next;
        }  
    };

    printf("데이터값 %d, 주소값 %p", pos->data, pos);
    
    return 0;
}