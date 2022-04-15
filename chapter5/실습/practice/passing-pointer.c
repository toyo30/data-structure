#include <stdio.h>

struct student{
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

// struct student stud1 = {};
int main(void)
{
    struct student stud1, *ptr_stud1;

    ptr_stud1 = &stud1;

    printf("r_no");
    scanf("%d", &ptr_stud1->r_no);
    printf("\nname");
    scanf("%s", ptr_stud1->name);
    printf("\ncourse");
    scanf("%s", ptr_stud1->course);
    printf("\nfees");
    scanf("%d", &ptr_stud1->fees);

   
    

    printf("\n ROLL No. = %d", ptr_stud1 -> r_no);
    printf("\n NAME = %s", ptr_stud1 -> name);
    printf("\n FEES = %d", ptr_stud1 -> fees);
    printf("\n course = %s", ptr_stud1 -> course);
    
    return 0;
}