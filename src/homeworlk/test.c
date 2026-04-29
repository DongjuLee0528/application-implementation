//
// Created by Dongju Lee on 2026. 4. 18..
//
#include <stdio.h>
int main(void) {
    printf("두 수를 입력해주세요");
    int x,y;
    scanf("%d %d",&x,&y);
    if (x>y)
        printf("%d가 더 큽니다",x);
    else
        printf("%d가 더 큽니다",y);
    return 0;
}