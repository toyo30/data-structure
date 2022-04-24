#include <stdio.h> 
#include <stdlib.h>

struct node
{
    int data;
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

    struct node *node2 = malloc(sizeof(struct node));
    node1->next = node2;
    node2->data = 20;

    node2->next = NULL;

    
  

    struct node *curr = head->next;
    while(curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    insert_after(head);
    

    curr = head->next;
    while(curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    delete_after(head);

    curr = head->next;
    while(curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    return 0;
}


struct node *insert_after(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\n Enter the data : ");//저장할 데이터
    scanf("%d", &num);
    printf("\n Enter the value after which the data has to be inserted : ");//후에 저장될 데이터
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;//주소값임 
    preptr = ptr;
    while(preptr -> data != val)//preptr의 데이터가 현재값이면 멈추고 그 자리에 삽입할 예정입니다. 
    {
        preptr = ptr; // 시작값이 preptr에 저장됨. 다음 
        ptr = ptr -> next; //다음 주소값이 ptr에 저장이 됨.
    }
    //반복문이 끝나면 preptr에는 val 전의 주소값이 저장되어 있음.
    preptr -> next = new_node;
    new_node -> next = ptr;

    return start;//바뀐 주소값을 반환함.
}

struct node *delete_after(struct node *start)
{
    struct node *ptr, *preptr;
    int val;    
    printf("\n Enter the value after which the data has to be deleted : ");//후에 저장될 데이터
    scanf("%d", &val);
    
    
    ptr = start;//주소값임 
    preptr = ptr;
    while(preptr -> data != val)//preptr의 데이터가 현재값이면 멈추고 그 자리에 삽입할 예정입니다. 
    {
        preptr = ptr; // 시작값이 preptr에 저장됨. 다음 
        ptr = ptr -> next; //다음 주소값이 ptr에 저장이 됨.
    }
    
    preptr->next = ptr->next;
    free(ptr);
   

    return start;//바뀐 주소값을 반환함.
}