#include <stdio.h> 
struct student {
    int id;
    char name[20];
};

void display(int, char str[]);

int main()
{   
    struct student stud1 = {2020, "papago"};
    display(stud1.id, stud1.name);
    return 0;
}


void display(int id, char str[20])
{
    printf("%d, %s", id, str);
}

