#include <stdio.h>
int main(void)
{
    int i, marks[10];
    for(i = 0; i < 10; i++)
        marks[i] = i;
    printf("%d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}