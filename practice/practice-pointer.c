#include <stdio.h>

int main(void)
{
    int a = 3;

    char letter[30] = "asdfasf\n";

    char c1 = 'k';

    printf("%d", a);
    printf("%s", letter);
    printf("%c", *letter);
    printf("%c", c1);
    printf("%s", *c1);
    return 0;
}

//여러 개의 배열을 저장하려면 큰 따옴표에 [30] 크기를 지정해줘야함

// 이것을 출력해줄 때는 %s를 주소값을 참조하여 출력, 특정값에만 접근

// *문자열 배열의 한 가지를 주소값을 이용하여 값을 출력 