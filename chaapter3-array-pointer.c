// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int *ptr, i;
//     ptr = &arr[2];
//     printf("%d", *ptr);
//     *ptr = -1;
//     printf("%d", ptr);
//     *(ptr + 1) = 0;
//     *(ptr - 1) = 1;
//     printf("\n Array is: ");
//     for(i = 0; i<5; i++)
//     {
//         printf("%d", *(arr+i));
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int *ptr1, *ptr2, i;
//     ptr1 = arr;
//     ptr2 = &arr[8];
//     while(ptr1<=ptr2)
//     {
//         printf("%d ", *ptr1);
//         ptr1++;
//     }
    
//     return 0;
// }


#include <stdio.h>
int main(void)
{
    int *ptr[5];
    int p = 1, q = 2, r = 3, s = 4, t = 5;
    ptr[0] = &p;
    ptr[1] = &q;
    ptr[2] = &r;
    ptr[3] = &s;
    ptr[4] = &t;
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", *ptr[i]);
        printf("%d\n", ptr[i]);
    }
    return 0;
}
