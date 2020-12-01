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


    /*
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
    */

   //break / continue
   // 1번부터 30번 까지 있는 반에서 1번에서 50번까지 조별 발표를 합니다.
   /*for(int i = 1; i <= 30; i++){
       if(i >= 6){
           printf("나머지 학생은 집에 가세요\n");
           break; //조건을 만족하면 탈출 
       }
       printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
   }
   */

  //1번부터 30번 까지있는반에서 7번학생은 아파서 결석
  //7번을 제외하고 6번부터 10번까지 조별 발표를 하세요 .
  /*  for(int i = 1; i <= 30; i++){
        if(i >= 6 && i <= 10){
            if(i == 7){
                printf("%d번 학생은 결석입니다\n", i);
                continue; //i == 7 이라는 조건을 만족했을때  이 이후에 있는 문장은 실행하지 않고 바로 되돌아감
            }
            printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
        }
    }
    
*/

    // && ||
    int a = 10;
    int b = 11;
    int c = 13;
    int d = 13;
    if( a == b || c == d){
        printf("a 와 b, 혹은 c 와 d 의 값이 같습니다\n");
    }
    else{
        printf("값이 서로 다르네요\n");
    }

    return 0;
}