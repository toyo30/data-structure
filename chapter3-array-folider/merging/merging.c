#include <stdio.h>

int main(void)
{
    int fir_arr[4] = {0, 1, 2, 3};
    int sec_arr[4] = {5, 6, 7, 8};
    int new_arr[10];
    int i, j, k;
    
    for(i = 0; i<4; i++)
    {
        new_arr[i] = fir_arr[i];
    }

    for(j=0; j<4; j++){
        new_arr[j+i] = sec_arr[j];
    }


    for(k=0; k<8; k++)
        printf("\nnew_arr[%d] = %d", k, new_arr[k]);

    return 0;
}


// new_arr[0] = 0
// new_arr[1] = 1
// new_arr[2] = 2
// new_arr[3] = 3
// new_arr[4] = 5
// new_arr[5] = 6
// new_arr[6] = 7
// new_arr[7] = 8