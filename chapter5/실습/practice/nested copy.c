#include <stdio.h>


typedef struct 
{
    int day;
    int month;
    int year;
}DOB;

typedef struct
{
    int roll_no;
    char name[20];
    float fees;
    DOB date;
}student;



int main(void)
{
    student stud1;

    return 0;
}