/*
#include <stdio.h> 
void add(int *); 
int main(void)
{
    int num = 2;
    printf("\n The value of num before calling the function = %d", num); 
    add(&num); 
    printf("\n The value of num after calling the function = %d", num);
    return 0;
}
void add(int *n)
{
    *n = *n + 10;
    printf("\n The value of num in the called function = %d", *n);
}
*/

/*
#include <stdio.h> 
int main(void)
{
    int num1 = 2, num2 = 3, sum = 0, mul =0, div = 1;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    mul =sum*(*ptr1);

    *ptr2+= 1;
    div = 9 + *ptr1/ *ptr2 - 30;

    printf("%d", div);
    return 0;
}


int main1(void)
{
    printf("asdf");
    return 0;
}
*/

#include <studio.h>
void Print_Num(int num)
{
 printf("%d\n", num);
}

int main(void)
{
    int number = 10;
    return 0;
}