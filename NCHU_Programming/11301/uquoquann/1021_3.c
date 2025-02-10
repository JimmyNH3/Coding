#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char digit[10010];
    scanf("%s", digit);
    int i;
    for(i = strlen(digit) - 1; i >= 0; i--) {
        printf("%c", digit[i]);
    }
}