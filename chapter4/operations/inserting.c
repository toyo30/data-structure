#include <stdio.h> 


int main()
{
    char text[100], str[20], ins_text[100];
    int i=0, j=0, k=0,pos;

    printf("\n Enter the main text : ");
    gets(text);

    gets(str);

    printf("\n position");
    scanf("%d", &pos);

    while(text[i] != '\0')
    {
        if(i==pos)
        {
            while(str[k] != '\0')
            {
                ins_text[j] = str[k];
                j++;
                k++;
            }
        }
        else{
            ins_text[j] = text[i];
            j++;
        }
        i++;
    }
    ins_text[j] = '\0';

    printf("\n %s", ins_text);

    return 0;
}

