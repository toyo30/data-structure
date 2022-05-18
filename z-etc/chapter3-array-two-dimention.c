// #include <stdio.h>

// int main(void)
// {
//     int arr[2][2] = {12, 34, 56, 32};
//     int i, j;
//     for(i = 0; i < 2; i++)
//     {
//         printf("\n");
//         for(j=0;j<2;j++)
//             printf("%d ", arr[i][j]);
//     }
//     return 0;
// }





// #include <stdio.h>
// void func(int arr[])
// {
//     int i;
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d ", arr[i] * 10);
//     }
// }
// int main(void)
// {
//     int arr[2][3] = {{1,2,3}, {4,5,6}};
//     func(arr[1]);
//     return 0;
// }



// #include <stdio.h>
// void func(int arr[])
// {
//     int i;
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d ", arr[i] * 10);
//     }
// }
// int main(void)
// {
//     int arr[2][3] = {{1,2,3}, {4,5,6}};
//     func(arr[1]);
//     // 인덱스번호를 넣어줘야함
//     //전체를 넣어줄 대는 배열의 이
//     return 0;
// }




// #include <stdio.h>
// void read_matrix(int mat[5][5], int);
// void display_matrix(int mat[5][5], int);
// int main(void)
// {
//     int row;
//     int mat1[5][5];
//     scanf("%d", &row);
//     read_matrix(mat1, row);
//     display_matrix(mat1, row);
//     return 0;
// }

// void read_matrix(int mat[5][5], int r)
// {
//     int i, j;
//     for(i = 0; i < r; i++)
//     {
//         for(j=0; j< r; j++)
//         {
//             if(i==j)
//                 mat[i][j]=0;
//             else if(i > j)
//                 mat[i][j] = -1;
//             else
//                 mat[i][j] = 1;
//         }
//     }
// }

// void display_matrix(int mat[5][5], int r)
// {
//     int i, j;
//     for(i = 0; i < r; i++)
//     {
//          printf("\n");
//         for(j=0; j< r; j++)
//         {
//            printf("\t %d", mat[i][j]);
               
//         }
//     }
// }




#include <stdio.h>

int main(void)
{
    int arr[2][2] = {{1,2}, {3,4}};
    int i, (*parr)[2];
    int j;
    parr = arr;
    
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            // printf("%d ", (*(parr+i))[j]);
            printf("%d ", parr[i][j]);
    }
    return 0;
}

