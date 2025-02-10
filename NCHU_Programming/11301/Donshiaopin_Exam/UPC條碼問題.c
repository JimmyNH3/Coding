#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define lli long long int
int main() {
    lli n;
    scanf("%lld", &n);
    int n1 = 0, n2 = 0, cnt = 0;
    while(n > 0) {
        if(cnt % 2 == 0) {
            n1 += n % 10;
        } else {
            n2 += n % 10;
        }        
        n /= 10;
        cnt ++;
    }
    printf("%d\n", abs((n1*3+n2-1)%10-9));

    //printf("%d %d", n1, n2);
}