#include <stdio.h>

int main(void)
{
char str1[50], str2[50];
int i=0, len1=0, len2=0, same=0;
clrscr();
printf("\n Enter the first string : ");
gets(str1);
printf("\n Enter the second string : ");
gets(str2);
len1 = strlen(str1);
len2 = strlen(str2);
if(len1 == len2)
{
         while(i<len1)
         {
                 if(str1[i] == str2[i])
                          i++;
        else break;
        }
         if(i==len1)
         {
    } 
}
}