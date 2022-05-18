#include <stdio.h>


int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = &arr[2];

    printf("\n ptr = %d, arr[2] = %d", *ptr, arr[2]);
    printf("\n *\(ptr+1\) = %d, arr[3] = %d", *(ptr+1), arr[3]);
    return 0;
}