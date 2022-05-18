#include <stdio.h> 

int main(void)
{
    int arr[2][2]={{1,2}, {3,4}};
    int i, (*parr)[2];
    parr = arr;
    for(i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("\narr[%d][%d]=%d", i, j, *(*(parr+i) +j));
        }
    }
    return 0;
}