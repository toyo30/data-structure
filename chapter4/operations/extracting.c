#include <stdio.h> 


int main()
{
    char str[100], substr[100];
    int i=0, j=0, n,m;

    gets(str);
    
    printf("\n position");
    scanf("\n %d", &m);
    printf("\n length");
    scanf("\n %d", &n);

    i = m;

    while(str[i] != '\0' && n>0)
    {
        substr[j] = str[i];
        i++;
        j++;
        n--;
    }

    substr[j] = '\0';
    printf("\n The substring is : ");
    printf("%s", substr);

    return 0;
}

