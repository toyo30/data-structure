#include <stdio.h> 
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE *next;
};

int main(void)
{
    struct NODE *head = malloc(sizeof(struct NODE));

    struct NODE *node1 = malloc(sizeof(struct NODE));
    head->next = node1;
    node1->data = 10;

    struct NODE *node2 = malloc(sizeof(struct NODE));
    node1->next = node2;
    node2->data = 20;

    struct NODE *node3 = malloc(sizeof(struct NODE));
    node2->next = node3;
    node3->data = 30;


    node3->next = NULL;


    struct NODE *curr = head -> next; 
    // 연결 리스트를 탐색하기 위한 포인터에 첫 번째 노드 주소를 저장
    // 순차적으로 다음 노드를 지나면서 데이터를 탐색할 예정 

    while(curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }


    return 0;
}

//결과값
//10
//20
//30