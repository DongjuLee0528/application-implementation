//
// Created by Dongju Lee on 2026. 4. 8..
//
#include <stdio.h>
#include <stdio.h>
int main(void){
    /*
    int i = 0, j = 0, k = 0;

    printf("i = %d, j = %d, k = %d\n", i, j, k);

    i = 1;
    j = 5;
    k = 7;

    printf("i = %d, j = %d, k = %d\n", i, j, k);
*/
    int num1 = 2, num2 = 3;
    int result1;

    result1 = (num1 > num2) ? num1 : num2;
    printf("result1에 저장된 값 %d\n", result1);

    return 0;
}