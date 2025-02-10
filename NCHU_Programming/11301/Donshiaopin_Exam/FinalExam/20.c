#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num0[3];
    int num[3][4];
    printf("%p\n", num0);
    printf("%p\n", &num0[0]);
    printf("%p\n", &num0);
    printf("%p\n", num);
    printf("%p\n", &num);
    printf("%p\n", *num);
    printf("%p\n", num[0]);
    printf("%p\n", num[1]);
    printf("%p\n", num[2]);
    printf("%p\n", &num[0]);
    printf("%p\n", &num[1]);
    printf("%p\n", &num[2]);
    /*
    1000
    1000
    1000
    1000
    1000
    1000

    1000
    1016
    1032


    */
}