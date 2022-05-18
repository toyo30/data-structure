/*

#include <stdio.h>
void sum(int*, int*, int*);
int main()
{
    int num1, num2, total;
    printf("\n Enter the first number :");
    scanf("%d", &num1);
    printf("\n Enter the second number :");
    scanf("%d", &num2);
    sum(&num1, &num2, &total);
    printf("\n Total = %d", total);
    return 0;
}
void sum (int *a, int *b, int *t)
{
    *t = *a + *b;
}

*/

/*


#include <stdio.h>//헤더파일을 인클루드함. 헤더파일을 가져다 사용하겠다. ,standard io header파일은 입출력을 관장하는 것

int main(void)
{
    int x, y, z = 10;
    int *pt1, *pt2;
    pt1 = &x, pt2 = &y;
    z = *pt1 + *pt2;
    printf("%d", z);
    return 0;//생략해도 상관이 없는데, int져와 같은 반환형을 선언해주었기 때문에 output이 나와야함. 
}

*/



/*


#include <stdio.h>
int main(void)
{
    printf("")
    return 0;
}
*/



/*
#include <stdio.h>
void main()
{
    printf("Welc");
}

*/

/*
#include <stdio.h>
int main(void)
{
    int i;
    char c;
    float f;
    printf("Enter values for i, c and f variable:");
    scanf("%d %c %f", &i,&c,&f);
    printf("%d %c %f", i, c, f);
    return 0;
}
*/

/*

#include <stdio.h>
#include <conio.h>//clrscr(); 콘솔을 완전히 지우는 것
int main(void)
{
    int x = 10;
    int y;
    y = x++;
    printf("%d", y);
    return 0;
}



#include <stdio.h>
int main(void)
{
    if score = 86;
    char grade;
    return 0;
}

*/


/*
#include <stdio.h>
//if else 보다 조금 더 빠르다. 
switch(grade)
{
    case 'A':
        printf("");
        break;//break문을 쓰지 않으면 printf("")를 찍고 케이스 b로 간다.
    case 'B';
        printf("");
        break;

}

*/

#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    if(num == 1){
        printf("Mon");
    }
    else if(num == 2){
        printf("Tue");
    }
    else if(num == 3){
        printf("Wen");
    }
    else if(num == 4){
        printf("Thu");
    }
    else if(num == 5){
        printf("Fri");
    }
    else if(num == 6){
        printf("Sat");
    }
    else if(num == 7){
        printf("sun");
    }
    return 0;
}