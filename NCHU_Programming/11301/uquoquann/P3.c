#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char hexa[16];
    scanf("%s", hexa);
    int i;
    


    hexa[11] = '1';
    hexa[10] = '0';
    hexa[9] = '1';

    for(i = 0; i < 16; i++) {
        printf("%c", hexa[i]);
    }
}