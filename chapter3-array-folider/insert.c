#include <stdio.h>

int main(void)
{
    int i, n, num, pos, arr[10];
    printf("\n Enter the number of elements in the array :");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] =", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the number to be inserted :");
    scanf("%d", &num);
    //삽입할 숫자
    printf("\n Enter the position at which the number has to be added: ");
    scanf("%d", &pos);
    //삽입할 포지션

    arr[5] = 4;

    printf("%d", arr[5]);
    /* for(i=n; i>=pos;i--)
    {
        arr[i+1] = arr[i];
        printf("\n arr[%d] = %d", i, arr[i]);
    } */
    

    // arr[pos] = num;
    // n = n + 1;
    // printf("\n The array after insertion of %d is :", num);
    


    return 0;
}