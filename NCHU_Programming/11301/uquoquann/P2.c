#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char obj[10000];
    scanf("%s", obj);

    for(i = 0; i < strlen(obj); i++) {
        obj[i] = obj[i] ^ '&';
    }
    for(i = 0; i < strlen(obj); i++) {
        printf("%c", obj[i]);
    }

    printf("\n");

    for(i = 0; i < strlen(obj); i++) {
        printf("%c", obj[i] ^ '&');
    }
}