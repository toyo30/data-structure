#include <stdio.h> 


int main()
{   
    char text[100], str[20], new_text[200];
    int i = 0, j = 0, k = 0, copy_loop = 0;
    gets(text);
    gets(str);

    while(text[i]!='\0')
    {
        j=0, found=0, k=i;
        while(text[k]==str[j] && str[j]!='\0')
        {
            k++;
            j++;
        }
        if(str[k] == '\0')
            copy_loop = k;
        new_text[n] = text[copy_loop];
        i++;
        copy_loop++;
        n++;
    }

    new_str[n] = '\0';
    printf("%s", new_str);
    return 0;
}
