#include <stdio.h>

int main(void)
{
    int fir_arr[4] = {20, 30, 40, 50};
    int sec_arr[7] = {15, 22, 31, 45, 56, 62, 78};
    int new_arr[15];
    int i, n1, n2, m, index = 0;
    int index_first = 0, index_second = 0;
    
    n1 = 4;
    n2 = 7;
    m = n1 + n2;

    while(index_first < n1 && index_second <n2)
    {
        if(fir_arr[index_first] < sec_arr[index_second])
        {
            new_arr[index] = fir_arr[index_first];
            index_first++;
        }
        else
        {
            new_arr[index] = sec_arr[index_second];
            index_second++;
        }
        index++;
    }

    if(index_first == n1)
    {
        while(index_second<n2)
        {
            new_arr[index] = sec_arr[index_second];
            index_second++;
            index++;
        }
    }

    if(index_second == n2)
    {
        while(index_first<n1)
        {
            new_arr[index] = fir_arr[index_first];
            index_first++;
            index++;
        }
    }


    printf("\n\n The merged array is");
    for(i=0;i<m;i++)
    {    
        printf("\n arr[%d] = %d", i, new_arr[i]);
    }


    return 0;
}


//  The merged array is
//  arr[0] = 15
//  arr[1] = 20
//  arr[2] = 22
//  arr[3] = 30
//  arr[4] = 31
//  arr[5] = 40
//  arr[6] = 45
//  arr[7] = 50
//  arr[8] = 56
//  arr[9] = 62
//  arr[10] = 78