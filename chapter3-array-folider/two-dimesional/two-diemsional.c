#include <stdio.h> 

int main(void)
{
    int marks[3][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int row = 3;
    int columns = 5;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf(" arr[%d][%d]=%d", i, j, marks[i][j]);
        }
        printf("\n");
    }


    return 0;
}