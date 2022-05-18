#include <stdio.h>

void add(int num[]);

      

int main(void)
{
    int arr[4] = {1,2,3,4};
    add(arr);

    return 0;
}


void add(int num[4])
{
	int i;
    for(i=0;i<4; i++)
        printf("\n sec[%d] = %d", i, num[i]);
}

//  sec[0] = 1
//  sec[1] = 2
//  sec[2] = 3
//  sec[3] = 4