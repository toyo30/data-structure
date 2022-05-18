#include <stdio.h>


void callByRefer(int *);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("\n%d", arr[5]);
    callByAddress(&arr[5]);

    printf("\n%p", &arr[5]);
    printf("\n%d", arr[5]);
    return 0;
}


void callByAddress(int *func_ptr)
{
    printf("\n%p", func_ptr);
    *func_ptr = 10;
}