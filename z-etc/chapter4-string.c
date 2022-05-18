#include <stdio.h>

int main()
{
    char str[5]; 
    char arr[5];
    scanf("%s%*c", str);
    printf("%s", str); 

    
    gets(arr);
    printf("\n%s", arr);


    /* getchar(arr);
    printf("%s", arr); */

    return 0;
}