#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if(a <= b) {
        int m = a;
        while(b % m != 0 || a % m != 0) {
            m -= 1;
        }
        printf("%d\n", m);
    } else {
        int m = b;
        while(b % m != 0 || a % m != 0) {
            m -= 1;
        }
        printf("%d\n", m);        
    }
    
}