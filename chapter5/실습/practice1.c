#include <stdio.h>

typedef struct{
    char name[20];
    int age;
    char address[30];
}student;

student stud1 = {"홍길동", 30, "서울시 용산구 한남동"};

int main(void)
{
    printf("\n 이름: %s", stud1.name);
    printf("\n 나이: %d", stud1.age);
    printf("\n 주소: %s", stud1.address);
    return 0;
}