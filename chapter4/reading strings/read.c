#include <stdio.h> 

int main(void)
{
    char str[10];
    char ch;
    // char dd[10];
    // scanf("%[^\n]s\\0", str);
    // scanf("%[^\n]s\\0", dd); // 두 개의 값을 받을 수 없음. 

    // gets(str);
    // gets(dd);

    int i = 0;
    ch = getchar;
    while(ch != '*')
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }

    str[i] = '\0';


    printf("\n %s", str);
    // printf("\n %s", dd);

    return 0;
}