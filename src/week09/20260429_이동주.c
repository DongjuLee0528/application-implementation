//
// Created by Dongju Lee on 2026. 4. 29..
//
#include <stdio.h>
int main(void) {
    /*
    int num;

    printf("5의 배수 : ");
    for(num=1; num<=100; num++){
        if(num%5==0)
            printf("%3d \n",num);
    }

    int age;

    printf("나이 입력 : ");
    scanf("%d", &age);

    if(age>=15 && age<=100)
        printf("회원 가입이 가능합니다.\n");

    else
        printf("회원 가입이 불가능합니다.\n");

    int num;

    printf("C 언어 성적 입력 : ");
    scanf("%d", &num);

    if(num>=95)
        printf("A+입니다.\n");

    if(num>=90)
        printf("A입니다.\n");

    if(num>=85)
        printf("B+입니다.\n");

    if(num>=80)
        printf("B입니다.\n");

    else
        printf("F입니다.\n");

    int num;

    printf("C 언어 성적 입력 : ");
    scanf("%d", &num);

    if(num>=95)
        printf("A+입니다.\n");

    else if(num>=90)
        printf("A입니다.\n");

    else if(num>=85)
        printf("B+입니다.\n");

    else if(num>=80)
        printf("B입니다.\n");

    else
        printf("F입니다.\n");


    int num;
    printf("몇 번 스위츠를 누르시겠습니다?");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("전등이 켜짐 \n");
            break;
        case 2:
            printf("전등이 켜짐 \n");
            break;
        case 3:
            printf("전등이 켜짐 \n");
            break;
            default:
            printf("스위치 오류: 우리집 스위는 1번 ~ 3번까지만 있습니다 \n");
    }
    char ch;

    printf("(T)hursday, (F)riday, (S)aturday\n");
    printf("문자 입력(T, F, S) : ");
    scanf("%c", &ch);

    switch(ch){
        case 'T':
        case 't':
            printf("Thursday\n");
            break;

        case 'F':
        case 'f':
            printf("Friday\n");
            break;

        case 'S':
        case 's':
            printf("Saturday\n");
            break;

        default:
            printf("잘못 입력되었습니다.\n");
    }
    */
    char ch;

    printf("문자를 입력하세요(q를 입력하면 종료) : ");

    for( ; ; ){
        scanf("%c", &ch);

        if(ch=='q')
            break;
    }

    printf("반복문을 종료합니다.\n");

    return 0;
}