#include <stdio.h> 


int main()
{
    char str[100], upper_str[100];
    int i = 0;
    printf("\n Enter the string");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            upper_str[i] = str[i] - 32;
        else
            upper_str[i] = str[i];
        i++;
    }
    
    upper_str[i] = '\0';
    printf("upper_str : %s", upper_str);
    return 0;
}