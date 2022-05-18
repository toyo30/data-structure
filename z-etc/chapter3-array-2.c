// 배열에 값을 추가하는 방법

#include <stdio.h>
int main(void)
{
    int i, marks[10];
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
        printf("%d", marks[i]);
    }   
    printf("%d %d %d %d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4], marks[5], marks[6], marks[7]);
    return 0;
}

