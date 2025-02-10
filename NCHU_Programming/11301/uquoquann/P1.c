#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char hexa[16];
    scanf("%s", hexa);
    int i;
    for(i = 8; i < 16; i++) {
        printf("%c", hexa[i]);
    }
    
    for(i = 0; i < 8; i++) {
        printf("%c", hexa[i]);
    }
}