#include <stdio.h>
#include <stdlib.h>
#define MAX 10//

int queue[MAX];
int front = -1, rear = -1;
void insert(void);
int delete_element(void);
void display(void);

int main(void)
{
    int option, val;
    insert();
    insert();
    insert();
    val = delete_element();
    if(val != -1)
        printf("\n The number deleted is : %d", val);
    display();
    return 0;
}

void insert()
{
    int num;
    printf("\n Enter the number to be inserted in the queue: ");
    scanf("%d", &num);
    if(rear == MAX -1)
        printf("\n OVERFlow");
    else if(front == -1 && rear == -1)
        front = rear = 0;
    else
        rear++;
    queue[rear] = num;
}

int delete_element()
{
    int val;
    if(front == -1 || front > rear)
    {
        printf("\n UNDERFLOW");
        return -1;
    }
    else
    {
        val = queue[front];
        front++;
        if(front > rear)
        front = rear = -1;
        return val;
    }
}

void display()
{
    int i;
    printf("\n");
    if(front == -1 || front > rear)
        printf("\n QUEUE IS Empty");
    else
    {
        for(i = front; i <= rear; i++)
            printf("QUEUE[%d] : %d \t", i, queue[i]);
    }
}