#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *display(struct node *);
struct node *insert_after(struct node *, struct node *);
struct node *delete_after(struct node *);

int main()
{
    struct node *head = malloc(sizeof(struct node));

    struct node *tail = malloc(sizeof(struct node));
    tail->next = head;
    head->data = 10;
    head->prev = tail;
    tail->data = 40;

    struct node *node1 = malloc(sizeof(struct node));
    head->next = node1;
    tail->prev = node1;
    node1->prev = head;
    node1->next = tail;
    node1->data = 20;
    
    //현재 서클 더블링크드 리스트 10 -> 20 -> 40 -> 10

    struct node *node2 = malloc(sizeof(struct node));
    //삽입해줄 새로운 노드

    
    display(head);
    //현 상태 
    insert_after(head, node2);
    // 데이터 생성

    display(head);
    //현 상태 

    delete_after(head);
    // 데이터 삭제

    display(head);
    // 현 상태


    return 0;
}

struct node *display(struct node *start)
{
    struct node *temp;
    temp = start;

    do
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }while(temp != start);

    return start;
}

struct node *insert_after(struct node *start, struct node *new_node)
{
    struct node *ptr, *preptr, *curr;
    int num, val;

    printf("\n Enter the data: ");
    scanf("%d", &num);
    // getchar();
    printf("\n Enter the val after which the data has to be inserted : ");
    scanf("%d", &val);
    // getchar();
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


