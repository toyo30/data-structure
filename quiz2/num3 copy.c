#include <stdio.h>

int main(void)
{
    char text[200], str[20], new_text[200];
    int i=0, j = 0, found = 0, k, n=0, copy_loop=0;
    printf("\n Enter a string :");
    gets(string);
    //알파벳 불러오는 라이브러리 비교해서 알파벳 아니면, 출력 삭제함
    printf("\n Enter the string to be deleted :")
    gets(str);

    while(string[i] != '\0')
    {
        j = 0, found = 0, k=i;
        while(text[k] == str[j] && str[j]! = '\0')
        {
            k++;
            j++;
        }

        if( (ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <='Z'))
        {

        }
        else
        {

        }
        i++;
    }
    return 0;
}