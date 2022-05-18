#include <stdio.h> 
struct student{
    int id;
    char name[20];
};
void display(struct student);

int main()
{
    struct student stud1 = {2020, "oooo"};
    display(stud1);
    return 0;
}


void display(struct student p)
{
    printf("%d %s", p.id, p.name);
};
