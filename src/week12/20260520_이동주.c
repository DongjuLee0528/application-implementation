//
// Created by Dongju Lee on 2026. 5. 20..
//

#include <stdio.h>
int main() {
    /*
    int array[3] = {87,99,80};
    int tota = 0;

    tota = array[0] + array[1] + array[2];
    printf("총점은 %d이고 \n", tota);
    printf("평군은 %.2lf입니다 \n",(double)tota/3);

    */


    int array[3] = {1,2,3};

    printf("%x %x %x \n", array+0, array+1, array+2);

    printf("%d %d %d \n", *(array+0), *(array+1), *(array+2));

    printf("%d %d \n", *(array+0), *array);

    return 0;
}