#include <stdio.h>

int main(void)
{
    int i, arr2[10];
    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(i = 0; i< 10; i++)
    {
        arr2[i] = arr1[i];
        printf("arr[%d] = %d:", i, arr2[i]);
    }
        

    return 0;
}

//1. 
    //int marks[5]={90, 82, 78, 95, 88};
    //초기화해서 선언하기 
    //사이즈 안 적어줘도 됨.

    //선언 안 된 값이 온다면, 0으로 채워진다. 


    //2.
    //키보드로부터 값 선언하기 
    //scanf로 값 넣기

    /* int i, marks[10];
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    } */

    //3. 
    //할당 동작 사용하기 
    //각각 하나하나 할당해주기.