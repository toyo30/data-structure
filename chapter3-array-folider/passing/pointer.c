#include <stdio.h>


int main(void)
{
    int *ptr;
    int i;

    ptr = &i;
    printf("%p", ptr);
    printf("\n%p", &i);

    i = 3;

    printf("\n%d", i);
    printf("\n%d", * ptr);


    printf("\n%p", ptr);

    return 0;
}


