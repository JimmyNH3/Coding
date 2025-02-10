#include <stdio.h>
#include <stdlib.h>

int re(int n) {
    if(n == 0) {
        return 1;
    } else if(n == 1) {
        return 1;
    } else {
        return n * re(n - 1);
    }
}

int main() {
    int n = 5;

    printf("%d!=%d", n, re(n));
}
