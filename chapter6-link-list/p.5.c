#include <stdio.h>
#include <stdlib.h>
//malloc , free 함수


struct NODE {
    struct NODE *next;//다음 주소를 연결함.
    int data;
};

int main()
{
    struct NODE *head = malloc(sizeof(struct NODE));//heae노드 생성
    //sizeof bite 단위로 리턴해주는 함수 4바이트
    //charater 1bite
    // int 4bite
    // node 의 크기를 할당함.
    //head tail에는 값을 할당하지는 않음.
    struct NODE *node1 = malloc(sizeof(struct NODE));
   


    head -> next = node1;
    node1 -> data = 10;


    struct NODE *node2 = malloc(sizeof(struct NODE));

    head -> next = node2;
    node2 -> data = 20;

    node2 -> next = NULL;


    struct NODE *curr = head->next;
    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    free(node2);//노드 메모리 해제  매모리가 빈공간으로 인식이 되고, 다른 공간을 사용할 수 있도록 만들어준 거임 
    free(node1);//노드 메모리 해제
    free(head);//머리 노드 메모리 해제 

    return 0;
}