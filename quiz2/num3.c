#include <stdio.h>

int main(void)
{
    char string[200], str[200], new_str[200];
    int i = 0, n=0;


    printf("\n Enter a string : ");
    gets(string);
    //알파벳 불러오는 라이브러리 비교해서 알파벳 아니면, 출력 삭제함

    while(string[i] != '\0')
    {
        if( (string[i] >= 'a' && string[i] <= 'z') || ( string[i] >= 'A' && string[i] <='Z'))
        {
            new_str[n] = string[i];
            n++;
        }

        i++;
    }
    printf("\n Output String : ");
    printf("%s", new_str);
    return 0;
}