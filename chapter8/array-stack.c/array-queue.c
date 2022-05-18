#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front;
    Node *rear;
    int count;
}Queue;

void enqueue(Queue *queue, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node -> data = data;
    node -> next = NULL;
    if(queue -> count == 0){
        queue -> front = node;
    } else {
        queue -> rear -> next = node;
    }
    queue -> rear = node;
    queue -> count++;
}
int dequeue(Queue *queue) {
    if(queue -> count == 0)
    {
        printf("큐 언더플로우");
        return 0;
    }
    Node *node = queue -> front;
    int data = node -> data;
    queue -> front = node -> next;
    free(node);
    queue -> count --;
    return data;
}

void show(Queue *queue) {
    Node *cur = queue -> front;
    while(cur != NULL)
    {
        printf("%d \n", cur->data);
        cur = cur -> next;
    }
}

int main(void)
{
    Queue queue;
    queue.front = queue.rear = NULL;
    queue.count = 0;

    enqueue(&queue, 7);
    enqueue(&queue, 5);
    enqueue(&queue, 4);
    dequeue(&queue);
    enqueue(&queue, 6);
    dequeue(&queue);

    show(&queue);

    return 0;
}