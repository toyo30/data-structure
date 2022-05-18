#include <stdio.h>
#define MAX 10
int queue[MAX];
int front = -1, rear = -1;
void insert(void);
int delete_element(void);
void display(void);

int main(void)
{
    int option, val;
    insert();
    display();
    insert();
    display();
    delete_element();
    display();
    insert();
    display();
    insert();
    display();
    return 0;
}


void display()
{
    int i;
    printf("\n");
    if (front==-1 && rear==-1)
        printf("\n QUEUE IS EMPTY");
    else
    {
        if(front<rear)
        {
            for(i=front; i<=rear;i++)
                printf("\t %d", queue[i]);
        }   
        else
        {
            for(i=front;i<MAX;i++)
                printf("\t %d", queue[i]);
            for(i=0;i<rear;i++)
                printf("\t %d", queue[i]);
        } 
    }
}

void insert()
{
    int num;
    printf("\n Enter the number to be inserted in the queue : ");
    scanf("%d", &num);
    if(front==0 && rear==MAX-1)
    {
        printf("\n OVERFLOW");
    }
    else if(front==-1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }
    else if(rear==MAX-1 && front!=0)
    {
        rear = 0;
        queue[rear] = num;
    }
    else
    {
        rear++;
        queue[rear] = num;
    }

}

int delete_element()
{
    int val;
    if(front==-1 && rear==-1)
    {
        printf("\n UNDERFLOW");
        return -1;
    }
    val = queue[front];
    if(front==rear)
        front=rear=-1;
    else
    {
        if(front==MAX-1)
            front = 0;
        else
            front++;
    }
    return val;
}