#include <stdio.h>
int main(void)
{
    int marks[8] = {99, 67, 78, 56, 88, 90, 34, 85};
    printf("%d", &marks[0]);
    printf("%p", marks);
    printf("%d", &marks[4]);
    // 주소값 출력은??
    return 0;
}