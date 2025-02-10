#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n[5] = {1,2,3,4,5};
    int a[5] = {0};
    int b[5] = {2, 4};
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d %d %d\n", n[i], a[i], b[i]);
    }
}