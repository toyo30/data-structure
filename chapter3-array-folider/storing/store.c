#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int i, arr[10];

    for(i=0;i<10;i++)
    {
        printf("인덱스 번호 %d 저장되어있는 값 %d\n", i, arr[i]);
    }

    return 0;
}
