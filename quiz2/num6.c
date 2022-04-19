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
// void Add(complex, complex, complex *);
void Add(complex, complex, complex *);



int main(void)
{
    complex num1, num2;
    complex add;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%lf", &num1.real);
    scanf("%lf", &num1.image);


    printf("For 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%lf", &num2.real);
    scanf("%lf", &num2.image);

   
    
    // Add(num1, num2, add);
    Add(num1, num2, &add);



    
    printf("Sum = %.1f + %.1fi", add.real, add.image);

    return 0;
}


void Add(complex num1, complex num2, complex *add)
{
    add -> real = num1.real + num2.real;
    add -> image = num1.image + num2.image;
}