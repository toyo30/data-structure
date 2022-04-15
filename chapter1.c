/*
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

*/


#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 1: 
        printf("Mon");
        break;
    case 2: 
        printf("Tue");
        break;
    case 3: 
        printf("Wen");
        break;
    case 4: 
        printf("Thu");
        break;
    case 5: 
        printf("Fri");
        break;
    case 6: 
        printf("Fri");
        break;
    case 7: 
        printf("sun");
        break;
    default:
        break;
    }
    


    return 0;
}
