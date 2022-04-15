#include <stdio.h>

typedef struct
{
    char f_name[20];
    char mid_name[20];
    char last_name[20];
}NAME;

typedef struct 
{
    int dd;
    int mm;
    int yy;
}DATE;

typedef struct
{
    int r_no;
    NAME name;
    char course[20];
    DATE DOB;
    float fees;
}student;


int main(void)
{

    return 0;
}