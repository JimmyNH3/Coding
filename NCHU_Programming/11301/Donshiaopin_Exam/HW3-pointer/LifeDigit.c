#include <stdio.h>
#include <stdlib.h>
#define lli long long int

lli f(lli a) {
    if(a < 10) return a;
    lli sum = 0;
    while(a > 0) {
        sum += a % 10;
        a /= 10;
    }
    return f(sum);
}

int main() {
    lli digit;
    scanf("%lld", &digit);
    printf("%lld", f(digit));
}