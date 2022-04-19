#include <stdio.h>

typedef struct
{
    int x;
    int y;
}complex;

void display(complex);

int main(void)
{
    complex num1 = {2, 3};
    display(num1);
  
    return 0;
}

void display(complex num)
{
    printf("%d %d", num.x, num.y);
}