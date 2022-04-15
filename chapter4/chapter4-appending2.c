#include <stdio.h>
#include <string.h>

int main(void)
{
    char Dest_Str[100], Source_Str[100];
    int i = 0, j = 0;
    printf("\n Enter the string : ");
    gets(Source_Str);
    printf("\n Enter the destination string : ");
    gets(Dest_Str);
    strcat(Dest_Str, Source_Str);
    /* 있는 함수를 사용하여 구현하기 */

    printf("%s\n", Dest_Str);

  /*   
    getch();
    한글자식 입력받는 함수. 버퍼에 저장되지 않음. 많이 사용되지 않음
   */

    return 0;
}