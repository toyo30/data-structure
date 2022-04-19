#include <stdio.h>

typedef struct
{
    int x;
    int y;
}complex;

void display(int, int);

int main(void)
{
    complex num1 = {2, 3};
    display(num1.x, num1.y);
  
    return 0;
}

void display(int a, int b)
{
    printf("%d %d", a, b);
}