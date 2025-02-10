#include <stdio.h>

int g(int x, int i) {
    if(i == 0) return 1;
    else return x * g(x, i - 1);
}

int f(int c[], int x, int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += c[i] * g(x, n - 1 - i);
    }
    return sum;
}

int main() {
    int n, x;
    scanf("%d", &n);
    int c[n], i;
    for(i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
    scanf("%d", &x);
    printf("%d", f(c, x, n));
    

}
