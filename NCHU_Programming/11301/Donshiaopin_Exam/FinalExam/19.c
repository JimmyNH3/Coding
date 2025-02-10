#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum color {
    red,
    green,
    purple
};
int main() {
    enum color fruit;
    fruit = red;

    switch(fruit) {
        case red:
            printf("It is apple\n");
            break;
        case green:
            printf("It is h\n");
            break;
        default:
            printf("It is i\n");
            break;
    }
}