#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char xo[n];
    scanf("%s", xo);

    // int a = strlen(xo);
    // printf("%d", a);

    int i = 0, j = 0, score = 0;
    while(i < n) {
        if(xo[i] == 'O') {
            j = i;
            while(xo[j] == 'O') {
                j++;
            }
            int time = j - i;
            score += time * (time + 1) / 2;
            i = j;
        } else {
            i++;
        }
    }
    printf("%d", score);
}