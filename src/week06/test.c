//
// Created by Dongju Lee on 2026. 4. 8..
//
#include <stdio.h>

#include <stdio.h>

int main(void)
{
    double exchangeRate = 1500.0;
    double dollar, won;

    printf("달러 입력: ");
    scanf("%lf", &dollar);

    won = dollar * exchangeRate;

    printf("원화: %.2f원\n", won);

    return 0;
}