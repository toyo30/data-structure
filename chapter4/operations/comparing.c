#include <stdio.h> 
#include <string.h>

int main()
{
    char str1[50], str2[50];
    int i = 0, len1 = 0, len2 = 0, same = 0;

    gets(str1);
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 == len2)
    {
        while(i<len1)
        {
            if(str1[i] == str2[i])
                i++;
            else
                break;
        }
        if(i==len1)
        {
            same= 1;
            printf("\n equal");
        }
    }

    if(len1 != len2)
        printf("\n not equal");

    if(same == 0)
    {
        if(len1 > len2)
            printf("\n str1 > str2");
        else if(len1 < len2)
            printf("\n str1 < str2");   
    }

    return 0;
}

