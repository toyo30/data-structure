#include <stdio.h>

void add(int point[4]);

      

int main(void)
{
    int arr[4] = {1,2,3,4};
    add(arr);



    return 0;
}


void add(int sec[4])
{
	int i;
    for(i=0;i<4; i++)
        printf("\n sec[%d] = %d", i, sec[i]);
}
   
//  sec[0] = 1
//  sec[1] = 2
//  sec[2] = 3
//  sec[3] = 4