#include <stdio.h>
#include <stdlib.h>

struct student
{
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

void display(struct student*);

int main()
{
    struct student *ptr=malloc(sizeof(struct student));
    printf("\n Enter the data for the student");
    printf("\n Roll No.: ");
    scanf("%d", &ptr->r_no);
    printf("\n Name: ");
    scanf("%s", ptr->name);
    printf("\n course: ");
    scanf("%s", ptr->course);
    printf("\n fees: ");
    scanf("%d", &ptr->fees);

    display(ptr);
    return 0;
}

void display(struct student *ptr){
    printf("\n %d", ptr->r_no);
    printf("\n %s", ptr->name);
    printf("\n %s", ptr->course);
    printf("\n %d", ptr->fees);
}