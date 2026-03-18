//
// Created by Dongju Lee on 2026. 3. 18..
//
#include <stdio.h>

int main(void)
{
    printf("\t Hello C! \n Hello World! \n");
    printf("큰따옴표: \" \" \n");
    printf("작은따옴표: \' \' \n");
    printf("역슬레시: \\\\ \n");

    printf("%d 더하기 %d는 %d 입니다 \n", 3,5,3+5);
    printf("%i 더하기 %i는 %i 입니다 \n", 3,5,3+5);
    printf("%d - %d = %d입니다 \n",3,5,3-5);
    printf("%i - %i = %i입니다 \n",3,5,3-5);

    printf("10진수: %d는 16진수: %x, 8진수: %o 입니다. \n", 50, 50, 50);
    printf("10진수: %d는 16진수: %x, 8진수: %o 입니다. \n", -50, -50, -50);
    // 16진수와 8진수는 음수 표현 불가


    return 0;
}