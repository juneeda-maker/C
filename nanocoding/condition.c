#include <stdio.h>

int main(void)
{
    //버스를 탄다고 가정 , 학생/ 일반인으로 구분 (일반인: 20세)
   // int age = 25;

    //if(조건) {.....} else{....}
    //if(age >= 20){
    //    printf("일반인 입니다.\n");
    //}    
    //else{
    //    printf("학생 입니다.\n");  
    //}

    //초등학생(8-13) /중학생 (14-16)/ 고등학생으로 (17-19)나누면?
    //if /else if /else / 

    int age = 25;
    if(age >= 8 && age <= 13)
    {
        printf("초등학생 입니다.\n");
    }

    else if (age >= 14 && age <= 16)
    {
        printf("중학생 입니다.\n");
    }
    else if(age >= 17 && age <= 19)
    {
        printf("고등학생 입니다.\n");
    }else
    {
        printf("학생이 아닌가봐요\n");
    }
    

    return 0;
}