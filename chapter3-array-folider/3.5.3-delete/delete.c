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


// 입력할 배열의 갯수를 선언해주세요 29 이하10

//  0 번 배열에 값을 넣어주세요0

//  1 번 배열에 값을 넣어주세요1

//  2 번 배열에 값을 넣어주세요2

//  3 번 배열에 값을 넣어주세요3

//  4 번 배열에 값을 넣어주세요4

//  5 번 배열에 값을 넣어주세요5

//  6 번 배열에 값을 넣어주세요6

//  7 번 배열에 값을 넣어주세요7

//  8 번 배열에 값을 넣어주세요8

//  9 번 배열에 값을 넣어주세요9

//  삭제하고 싶은 인덱스 번호를 입력해주세요4

//  arr[0] = 0
//  arr[1] = 1
//  arr[2] = 2
//  arr[3] = 3
//  arr[4] = 5
//  arr[5] = 6
//  arr[6] = 7
//  arr[7] = 8
//  arr[8] = 9