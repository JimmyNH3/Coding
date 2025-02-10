#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
    if(a == 0) {
        return b;
    } else if(b == 0) {
        return a;
    } else if(a < b) {   
        return gcd(b, a);
    } else {
        if(a % b == 0) {
            return b;
        }
        return gcd(b, a % b);
    }
}
// 18/12 = 1...6
// 12/6 = 2...0
// 6 = gcd
int main() {
    printf("%d\n", gcd(12, 18));
    printf("%d\n", gcd(18, 0));
    printf("%d\n", gcd(0, 12));
    printf("%d\n", gcd(0, 0));
}