#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;
    int n, i, ini = 0;
    scanf("%d ", &n);
    for(i = 0; i < n; i++) {
        scanf("%c", &a);
        if(a == 'L') ini--;
        else ini++;
    }
    printf("%d", ini);
}