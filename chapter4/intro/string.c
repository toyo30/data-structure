#include <stdio.h> 

int main(void)
{
    char str[] = "HELLO";
    char a[3] = "IJ\0";
    char b[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    // char c[];
    // c = "hoho";
    // 선언이 따로 떨어질 수 없음

    // char d[2] = "hoho";
    // 해당하는 size를 넘길 수 없음.

    printf("\n%s", str);
    printf("\n%p", str);
    printf("\n%s", a);
    printf("\n%p", a);
    printf("\n%s", b);
    printf("\n%p", b);

    // printf("\n%s", c);
    // printf("\n%p", c);

    return 0;
}