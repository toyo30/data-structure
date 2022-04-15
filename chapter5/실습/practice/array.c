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

    int n, i;
    struct student stud1[50];

    printf("\n enter the number of studnet :");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the roll number :");
        scanf("%d", &stud1[i].id);
        printf("Enter the name :");
        scanf("%s", stud1[i].name);
        printf("Enter the fees :");
        scanf("%f", &stud1[i].fees);
        printf("Enter the DOB:");
        scanf("%s", stud1[i].DOB);
    }
    
    
    printf("***** STUDENT'S DETAILS *****");
    for(i=0;i<n;i++)
    {
        printf("\n ROLL No. = %d", stud1[i].id);
        printf("\n NAME = %s", stud1[i].name);
        printf("\n FEES = %f", stud1[i].fees);
        printf("\n DOB = %s", stud1[i].DOB);
    }
    return 0;
}