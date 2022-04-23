#include <stdio.h>
#include <stdlib.h>
// #include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

int main()
{

    printf("%d", start->data);
    return 0;
}