#include <stdio.h>
//함수 선언함. 
//함수 정의하는 파트는 메인을 포함하면 안 됨. 
void read_array(int arr[], int n);
// return이 없음
int find_small(int arr[], int n);
// return값 int



int main()
{
    int num[10], n, smallest;
    printf("\n Enter the size the array :");
    scanf("%d", &n);
    read_array(num, n);
    smallest = find_small(num, n);
    printf("\n")

    return 0;
}

void read_array(int arr[10], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        
    }
}