#include <stdio.h>
// #include <conio.h>

int main(void)
{
    int i, n, num, pos, arr[10];
    // clrscr();
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(i=0; i<n;i++)
    {
        printf("\n arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("\n enter the number to be inserted: ");
    scanf("%d", &num);
    printf("\n enter the position at which the number has to be added: ");
    scanf("%d", &pos);
    for(i=n-1;i<n;i++)
        arr[i+1] = arr[i];
    arr[pos] = num;
    n = n + 1;
    printf("\n The array after insertion of %d is :", num);
    for(i = 0; i < n; i++)
        printf("\n arr[%d] = %d", i, arr[i]);
    // getch();
    return 0;
}