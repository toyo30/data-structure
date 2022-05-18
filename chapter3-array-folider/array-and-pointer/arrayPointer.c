#include <stdio.h> 

int main(void)
{
    int *ptr[10];
    int s = 4;
    int i = 1;
    int j = 3;
    int k = 8;

    ptr[0] = &s;
    ptr[1] = &i;
    ptr[2] = &j;
    ptr[3] = &k;

    for(int a=0;a<4;a++)
    {
        printf("\n 인덱스 %d의 주소값 %p", a, ptr[a]);
    }

    for(int b=0;b<4;b++)
    {
        printf("\n 인덱스 %d의 참조값 %d", b, *ptr[b]);
    }
    return 0;
}