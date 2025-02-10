#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int

int main() {
    ll n, sum = 0;
    scanf("%lld", &n);
    do {
        sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    } while (sum > 10);
    printf("%lld", sum);
}