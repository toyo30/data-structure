#include <stdio.h>

typedef struct
{
    int x;
    int y;
}complex;
//구조체 포인터를 만들어준다.

void display(complex);

int main(void)
{
    complex *ptr_num, num1;
    ptr_num = &num1;
    printf("\n Enter the detail of the stundet");
    printf("\n Enter the x =");
    scanf("%d", &ptr_num -> x);

    printf("\n Enter the y =");
    scanf("%d", &ptr_num -> y);

    printf("%d %d", ptr_num -> x, ptr_num -> y);

    return 0;
}

// void display(complex num)
// {
//     printf("%d %d", num.x, num.y);
// }