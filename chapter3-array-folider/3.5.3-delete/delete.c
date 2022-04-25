#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int i, n, arr[30];
    
    printf("\n 입력할 배열의 갯수를 선언해주세요 29 이하");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {   
        printf("\n %d 번 배열에 값을 넣어주세요", i);
        scanf("%d", &arr[i]);
    }

    int pos;

    printf("\n 삭제하고 싶은 값을 가진 배열의 인덱스 번호를 입력해주세요");
    scanf("\n %d", &pos);

    for(i=pos;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }


    for(i=0;i<n-1;i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }

    return 0;
}
