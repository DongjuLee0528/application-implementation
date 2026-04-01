//
// Created by Dongju Lee on 2026. 4. 1..
//
#include <stdio.h>
int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", (x + y) * (x + z) / (y % z));
    return 0;
}