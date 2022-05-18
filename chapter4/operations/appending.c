#include <stdio.h> 


int main()
{
    char one_str[100], sec_str[100];
    int i = 0;
    int j = 0;

    gets(one_str);
    gets(sec_str);

    while(one_str[i] != '\0')
    {
        i++;
    }

    while(sec_str[j] != '\0')
    {
        one_str[i] = sec_str[j];
        i++;
        j++;
    }
    one_str[i] = '\0';

    printf("merging %s", one_str);

    return 0;
}