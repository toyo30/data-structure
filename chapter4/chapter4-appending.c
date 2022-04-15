#include <stdio.h>
int main(void)
{
    char Dest_Str[100], Source_Str[100];
    int i = 0, j = 0;
    printf("\n Enter the string : ");
    gets(Source_Str);
    printf("\n Enter the destination string : ");
    gets(Dest_Str);
    while(Dest_Str[i] != '\0')
        i++;
    
    while(Source_Str[j] != '\0')
    {
        Dest_Str[i] = Source_Str[j];
        i++;
        j++;
    }
    Dest_Str[i] = '\0';
    printf("\n After appending, the destination string is: ");
    puts(Dest_Str);

  /*   
    getch();
    한글자식 입력받는 함수. 버퍼에 저장되지 않음. 많이 사용되지 않음
   */

    return 0;
}