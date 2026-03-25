//
// Created by Dongju Lee on 2026. 3. 25..
//
/*
#include <stdio.h>

int main(void)
{
    int age;

    printf("What is your age?: ");
    scanf("%d", &age);

    printf("Wow! Really? Are you %d years old?\n", age);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("10진수 정수 1개 입력: ");
    scanf("%d", &a);
    printf("10진수: %d, 16진수: %x, 8진수: %o \n", a, a, a);

    printf("16진수 정수 1개 입력: ");
    scanf("%x", &b);
    printf("10진수: %d, 16진수: %x, 8진수: %o \n", b, b, b);

    printf("8진수 정수 1개 입력: ");
    scanf("%o", &c);
    printf("10진수: %d, 16진수: %x, 8진수: %o \n", c, c, c);

    return 0;
}
*/
#include <stdio.h>

int main(void)
{
    float f1, f2;
    double d1, d2;

    printf("float형 실수 두 개 입력: ");
    scanf("%f %f", &f1, &f2);
    printf("float형 실수 출력: f1=%f, f2=%e \n", f1, f2);

    printf("double형 실수 두 개 입력: ");
    scanf("%lf %lf", &d1, &d2);
    printf("double형 실수 출력: d1=%lf, d2=%le \n", d1, d2);

    return 0;
}