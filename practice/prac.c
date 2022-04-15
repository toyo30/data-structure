#include <stdio.h>

int main(void)
{
    char str[3] = {'a', 'd', '3'};
    str[4] = 5;
    printf("%c", str[4]);

    for(int i = 0; i < 3; i++)
    {
        printf("%c", str[i]);
        
    }
    return 0;
}
