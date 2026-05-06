//
// Created by Dongju Lee on 2026. 5. 6..
//

#include <stdio.h>
/*
int sum(int x, int y)
{
    int result = 0;
    result = x + y;

    return result;
}

int main(void)
{
    int answer = 0;

    answer = sum(3, 4);

    printf("%d \n", answer);


    return 0;

}*/
double divide(double x, double y);

double input(void);

void output(double x);

void information(void);

int main(void)

{

    double num1, num2, result;

    information();

    printf("첫 번째 실수 입력: ");

    num1 = input();

    printf("두 번째 실수 입력: ");

    num2 = input();

    if (num2 == 0)

    {

        printf("0으로 나눌 수 없습니다.\n");

        return 1;

    }

    result = divide(num1, num2);

    output(result);

    return 0;
}
double divide(double x, double y) {
    return x / y;
}

double input(void){
    double val;
    scanf("%lf", &val);
    return val;
}

void output(double x){
    printf("나눗셈 결과: %lf\n", x);
}

void information(void){
    printf("--- 프로그램 시작 ---\n");
}