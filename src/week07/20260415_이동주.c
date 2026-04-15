//
// Created by Dongju Lee on 2026. 4. 15..
// 7주차 - while문을 이용한 반복문 실습
//
#include <stdio.h>

int main(void) {
    // 기본 while문 예제 (주석 처리됨)
    /*
    int num = 0;
    while (num < 5) {
        printf("반복 내용: %d\n",num);
        num++;
    }
    printf("반복문을 종료한 후 :%d\n",num);


    // 구구단 출력 프로그램 (2단부터 9단까지)
    int i = 2;  // 외부 루프 변수 (단)
    int j = 1;  // 내부 루프 변수 (곱해질 수)
    int result = 0;  // 곱셈 결과를 저장할 변수
    printf("시작하고 싶은 단수를 입력하세요: ");
    scanf("%d", &i);

    // 외부 while문: 2단부터 9단까지
    while (i < 10) {
        // 내부 while문: 1부터 9까지 곱하기
        while (j < 10) {
            result = i * j;  // 곱셈 연산
            printf("%d * %d = %d\n", i, j, result);  // 결과 출력
            j++;  // 내부 루프 변수 증가
        }
        i++;     // 외부 루프 변수 증가 (다음 단으로)
        j = 1;   // 내부 루프 변수 초기화
        printf("-------------\n");  // 각 단 사이 구분선
    }


    int num = 0, j = 9, result = 0;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    while (num > 0)
    {
        while (j > 0)
        {
            result = num * j;
            printf("%d * %d = %d\n", num, j, result);
            j--;
        }
        num--;
        j = 9;
        printf("-------------\n");
    }
    */
    return 0;
}