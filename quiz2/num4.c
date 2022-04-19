#include <stdio.h>
// int Swapfun(int *, int *, int *);

void Swapfun(int *a, int *b, int *c)
{
    printf("asdf");
    int temp_a, temp_b;

    temp_a = *a;
    temp_b = *b;
    a = *c;
    b = temp_a;
    c = temp_b;
}

int main()
{
    int a, b, c;


    printf("\n Enter a, b and c respectively : ");
    scanf("\n %d", &a);
    scanf("\n %d", &b);
    scanf("\n %d", &c);

    printf("\n Value before swapping : ");
    printf("\n %d", a);
    printf("\n %d", b);
    printf("\n %d", c);
    
    Swapfun(&a, &b, &c);
    
    
    printf("\n Value before swapping : ");
    printf("\n %d", a);
    printf("\n %d", b);
    printf("\n %d", c);

    return 0;
}

