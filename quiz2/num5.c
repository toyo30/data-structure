#include <stdio.h>

typedef struct {
    int feet;
    float inch;
}distance;

int main(void)
{
    // distance dist1, dist2;
    distance dist1;
    distance dist2;

    printf("Enter 1st distance");
    printf("\n Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("\n Enter inch: ");
    scanf("%f", &dist1.inch);


    printf("\nEnter 2st distance");
    printf("\n Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("\n Enter inch: ");
    scanf("%f", &dist2.inch);

    printf("Sum of distances = %d`-%.1f", dist1.feet + dist2.feet, dist1.inch + dist2.inch);

    return 0;
}

