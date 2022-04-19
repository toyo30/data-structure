#include <stdio.h>

int main(void)
{
    char string[40];
    char letter[10];
    int i = 0;
    int count = 0;
    
    
    // int count = 0;

    printf("Enter a string: ");
    gets(string);
    printf("Enter a character to find its frequency: ");
    gets(letter);

    while(string[i] != '\0')
    {
        if(string[i] == *letter)
        {
            count++;    
        }
        i++;
    }
    
    printf("Frequency of e = %d", count);

    return 0;
}

// while(string[i] != '\0')
//     {
//         if(string[i] == letter)
//         {
            
//         }
//         printf("%c", string[i]);
//         i++;
//     }
// printf("%c", string[0]);
// printf("%c", string[1]);

// char str[40];
// scanf("%s", str);
// printf("%c", str[0]);
// printf("%c", str[1]);




/* 

int count, i= 0;

    int i1, count1 = 0;

    변수 선언을 이렇게 같이하면, count에 2가 출력됨

printf("count %d \n", count);
    printf("i %d \n", i);
    printf("count1 %d \n", count);
    printf("i1 %d \n", i); */



/* 
문자 하나를 출력할 때는 왜 *letter를 쓰는가? 

%s
%c
차이 

문자 하나와 

문자 열의 차이
%s string
%c *letter

*/