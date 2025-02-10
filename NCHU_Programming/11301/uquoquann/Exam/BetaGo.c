#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char hexa[1000];
    scanf("%s", hexa);
    char alph[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    int i, j, tenth = 0;
    for(i = 0; i < strlen(hexa); i++) {
        for(j = 0; j < 16; j++) {
            if(hexa[i] == alph[j]) {
                tenth = tenth * 16 + j;
                break;
            }
        }
    }

    long long int bi = 0, muti = 1;
    int time = 0;
    while(tenth > 0) {
        bi += (tenth % 2) * muti;
        muti *= 10;
        tenth /= 2;
        time++;
    }

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