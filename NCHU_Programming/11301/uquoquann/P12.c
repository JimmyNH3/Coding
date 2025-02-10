#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char time[5];
    scanf("%s", time);
    int hr = 0, minu = 0, i = strlen(time) - 1, muti = 1;
    while(time[i] != ':') {
        minu += (time[i] - '0') * muti;
        i -= 1;
        muti *= 10;
    }
    muti = 1;
    i -= 1;
    while(i != -1) {
        hr += (time[i] - '0') * muti;
        i -= 1;
        muti *= 10;
    }
    if(hr == 0) {
        printf("12:%02d AM", minu);
    }
    if(hr == 12) {
        printf("12:%02d PM", minu);
    }
    if(hr > 12) {
        printf("%d:%02d PM", hr - 12, minu);
    }
    if(hr < 12 && hr != 0) {
        printf("%d:%02d PM", hr, minu);
    }
}