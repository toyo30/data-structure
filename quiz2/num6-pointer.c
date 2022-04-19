#include <stdio.h>

// typedef struct {
//     int x;
//     int y;
// }complex;


typedef struct {
    double real;
    double image;
}complex;


// double sum_r;
// double sum_c;

// void Add(complex);

// void display(int, int);

// void Add(complex, complex, int *, int *);
void Add(complex, complex, double *, double *);



int main(void)
{
    complex num1, num2;
    double *real_sum, *image_sum;



    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%lf", &num1.real);
    scanf("%lf", &num1.image);


    printf("For 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%lf", &num2.real);
    scanf("%lf", &num2.image);

    printf("%lf", &real_sum);
    
    Add(num1, num2, real_sum, image_sum);


    printf("%lf", *real_sum);

    // printf("Sum = %lf + %lf", *real_sum, *image_sum);


    return 0;
}

// void Add(complex num1, complex num2, *ptr)
// {

// }

void Add(complex num1, complex num2, double *ptr, double *ptr2)
{

    double sum_real = num1.real + num2.real;
    double sum_image = num1.image + num2.image;

    ptr = &sum_real;
    ptr2 = &sum_image;
}