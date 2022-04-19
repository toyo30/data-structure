#include <stdio.h>

int main(void)
{
    float arr_a[2][2], arr_b[2][2];
    int i, j;

    printf("Enter elements of 1st matrix\n");
    for(i=0; i<2; i++)
    {   
        for(j=0; j<2;j++)
        {
            printf("Enter a%d%d :", i + 1, j + 1);
            scanf("%f", &arr_a[i][j]);
            // printf("\n");
            // printf("%f \n", arr_a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(i=0; i<2; i++)
    {   
        for(j=0; j<2;j++)
        {
            printf("Enter b%d%d :", i + 1, j + 1);
            scanf("%f", &arr_b[i][j]);
            // printf("\n");
            // printf("%f \n", arr_b[i][j]);
        }
    }

    printf("Sum Of Matrix\n");
    printf("%.1f    %.1f\n", arr_a[0][0] + arr_b[0][0], arr_a[0][1] + arr_b[0][1]);
    printf("%.1f    %.1f\n", arr_a[1][0] + arr_b[1][0], arr_a[1][1] + arr_b[1][1]);

    return 0;
}

