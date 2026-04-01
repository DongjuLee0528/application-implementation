//
// Created by Dongju Lee on 2026. 4. 1..
//
/*
#include <stdio.h>
int main(void) {
    int a =0;
    int b =1;

    printf("a의 값은 %d입니디\n",a);
    printf("b의 값은 %d입니디\n",b);

    a = 1+ 10;
    b = b+ 10;

    printf("변경된 a의 값은 %d입니다.\n",a);
    printf("변경된 b의 값은 %d입니다.\n",b);
    return 0;
}

#include <stdio.h>
int main(void) {
    int appleBox = 30;
    int grapeBox = 20;
    int total;

    total = appleBox + grapeBox;

    printf("총 %d 박스가 있습니다\n",total);

    return 0;
}

#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 4;

    printf("a의 값: %d \n", a);
    printf("b의 값: %d \n", b);

    printf("변수 a의 시작 주소: %x \n",&a);
    printf("변수 b의 시작 주소: %x \n",&b);

    return 0;
}
#include <stdio.h>

int main(void)
{
    const int NUM = 100;
    const double PI = 3.14;

    // NUM = 200;
    // PI = 4.14;

    printf("NUM: %d\n", NUM);
    printf("PI: %.2f\n", PI);

    return 0;
}

#include <stdio.h>

#define PI 3.14
#define NUM 100
#define BUFFER_SIZE 200

int main(void)
{
    printf("%lf \n", PI);
    printf("%d \n", NUM);
    printf("%d \n", BUFFER_SIZE);

    return 0;
}

// [5]
#include <stdio.h>

int main() {
    printf("10 + 20 = %d\n", 10 + 20);
    return 0;
}
*/
// [6]
#include <stdio.h>
int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", (x + y) * (x + z) / (y % z));
    return 0;
}