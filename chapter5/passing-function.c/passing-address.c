#include <stdio.h> 
struct student {
    int id;
};
void display(struct student *);

int main()
{
    struct student stud1 = {10};
    struct student *ptr;
    ptr = &stud1;
    printf("%d", stud1.id);

    display(ptr);

    printf("\n%d", stud1.id);
    return 0;
}

void display(struct student *aa){
    aa->id = 100;
}



