#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    int fn;
    scanf("%d", &fn);
    int fx[fn];
    for(i = 0; i < fn; i++) scanf("%d", &fx[i]);

    int gn;
    scanf("%d", &gn);
    int gx[gn];
    for(i = 0; i < gn; i++) scanf("%d", &gx[i]);

    for(i = 0; i < fn + gn - 1; i++) {
        int an = 0;
        for(j = 0; j <= i; j++) {
            if(j < fn && i - j < gn) an += fx[j] * gx[i - j];
        }
        printf("%d ", an);
    }
}

