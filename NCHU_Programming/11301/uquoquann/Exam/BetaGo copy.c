#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    unsigned int n;
    scanf("%x", &n);
    int s = n;
    

    long long int bi = 0, muti = 1;
    int time = 0;
    while(s > 0) {
        bi += (s % 2) * muti;
        muti *= 10;
        s /= 2;
        time++;
    }
    int i;
    for(i = 0; i < 32 - time; i++) {
        printf("-");
    }
    char bistr[time];
    int index = 0;
    while(bi > 0) {
        bistr[index] = bi % 10 + '0';
        bi /= 10;
        index++;
    }
    for(i = time - 1; i >= 0 ; i--) {
        if(bistr[i] == '1') {
            printf("*");
        } else {
            printf("-");
        }
    }
}