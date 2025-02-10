#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char time[7];
    scanf("%s", time);

    //take value of a/pm, hr, min
    int dn_index = strlen(time) - 2;

    int hr;
    if(strlen(time) == 6) {
        hr = time[0] - 48;
    } else {
        hr = (time[1] - 48) + (time[0] - 48) * 10;
    }

    int mi = (time[strlen(time) - 3] - 48) + (time[strlen(time) - 4] - 48) * 10;

    //Judge
    if(time[dn_index] == 'P') {
        printf("NO");
    } else {
        if(hr > 9) {
            printf("NO");
        } else {
            if(hr == 9 && mi > 45) {
                printf("NO");
            } else {
                printf("YES");
            }
        }
    }

    //printf("%d %d %d", dn_index, hr, mi); 
}