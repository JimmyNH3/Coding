#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
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

    int total = hr * 60 + minu;

    if(total >= 480 && total < 583) {
        if(abs(total - 480) <= abs(total - 583)) printf("8:00 a.m. / 10:16 a.m");
        else printf("9:43 a.m. / 11:52 a.m");
    }
    if(total >= 583 && total < 679) {
        if(abs(total - 583) <= abs(total - 679)) printf("9:43 a.m. / 11:52 a.m");
        else printf("11:19 a.m. / 1:31 p.m");        
    }
    if(total >= 679 && total < 767) {
        if(abs(total - 679) <= abs(total - 767)) printf("11:19 a.m. / 1:31 p.m");
        else printf("12:47 p.m. / 3:00 p.m");
    }
    if(total >= 767 && total < 840) {
        if(abs(total - 767) <= abs(total - 840)) printf("12:47 p.m. / 3:00 p.m");
        else printf("2:00 p.m. / 4:08 p.m");        
    }
    if(total >= 840) {
        if(abs(total - 840) <= abs(total - 945)) printf("2:00 p.m. / 4:08 p.m");
        else printf("3:45 p.m. / 5:55 p.m");        
    }
}