#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int m, y, c, amount;
    scanf("%d%d%d%d", &m, &y, &c, &amount);
    char color[amount];
    scanf("%s", color);
    int i;
    for(i = 0; i < amount; i++) {
        switch(color[i]) {
            case 'M': m--; break;
            case 'Y': y--; break;
            case 'C': c--; break;
            case 'R': m--; y--; break;
            case 'V': m--; c--; break;
            case 'G': c--; y--; break;
            case 'B': m--; y--; c--; break;
        }
    }
    if(m < 0 || y < 0 || c < 0) {
        printf("NO");
    } else {
        printf("YES %d %d %d", m, y, c);
    }
}
