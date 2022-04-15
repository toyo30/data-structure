/*
#include <stdio.h>
int main(void)
{
    int i = 0;
    while(i<=10)
    {
        printf("\n %d", i);
        i = i + 1;
    }
    return 0;
}
*/



#include <stdio.h>
int main(void)
{
    int i = 11;
    do
    {
        printf("\n %d", i);
        i = i + 1;
    }while(i <= 10);
    return 0;
}

//i 가 10 이상이더라도 하나는 출력하고 끝난다. 