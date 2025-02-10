#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char digit[1000];
    scanf("%s", digit);
    int re = 1;
    int i = 0, j = strlen(digit) - 1;
    while(i < j) {
        if(digit[i] != digit[j]) {
            printf("NO");
            re = 0;
            break;
        }
        i++;
        j--;
    }
    if(re == 1) printf("YES");
}