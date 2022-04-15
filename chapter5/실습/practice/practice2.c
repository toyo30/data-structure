#include <stdio.h>

struct student{
    int id;
    char name[20];
    float fees;
    char DOB[40];
};

// struct student stud1 = {};
int main(void)
{

    struct student stud1;

    printf("Enter the roll number :");
    scanf("%d", &stud1.id);

    printf("Enter the name :");
    scanf("%s", stud1.name);
    

    printf("Enter the fees :");
    scanf("%f", &stud1.fees);
    

    printf("Enter the DOB:");
    scanf("%s", stud1.DOB);
    
    printf("***** STUDENT'S DETAILS *****");

    printf("\n ROLL No. = %d", stud1.id);
    printf("\n NAME = %s", stud1.name);
    printf("\n FEES = %f", stud1.fees);
    printf("\n DOB = %s", stud1.DOB);

    return 0;
}