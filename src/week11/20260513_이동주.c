//
// Created by Dongju Lee on 2026. 5. 13..
//
/*
#include <stdio.h>

int main(void) {
    int i = 0;

    for(i = 1; i < 3; i++)
    {
        int total = 0;
        total = total + i;
    }

    if(total < 10)
    {
        printf("total 값은 %d입니다.\n", total);
    }

    return 0;
}

#include <stdio.h>

int subtract(int x, int y);

int main(void) {
    int a = 5, b = 3;
    int result = 0;

    result = subtract(a, b);

    printf("뺄셈결과: %d \n", result);

    return 0;
}

int subtract(int x, int y)
{
    return x - y;
}

#include <stdio.h>

int main(void){
    extern int num1;
    extern int num2;
    extern int num3;

    printf("num1의 값 : %d \n", num1);
    printf("num2의 값 : %d \n", num2);
    printf("num3의 값 : %d \n", num3);
    printf("덧셈 결과 : %d \n", num1 + num2 + num3);

    return 0;
}*/
#include <stdio.h>
#include <time.h>

#define MAX 100000000

int main(void)
{
    register int i;
    clock_t startTime, endTime;

    startTime = clock();

    for(i = 0; i < MAX; i++)
    {

    }

    endTime = clock();

    printf("레지스터 변수 실행 시간: %lf초\n",
           (double)(endTime - startTime) / CLOCKS_PER_SEC);

    return 0;
}