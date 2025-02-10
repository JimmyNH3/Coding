#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define lli long long int

int main() {
    int n, i;
    scanf("%d", &n);
    lli a[n], min = pow(2, 32) - 1, max = 0, sum = 0;
    lli max2 = 0, min2 = pow(2, 32) - 1;

    for(i = 0; i < n; i++) {
        scanf("%lli", &a[i]);
        if(a[i] >= max) max = a[i];
        if(a[i] <= min) min = a[i];
        sum += a[i];
    }

     for(i = 0; i < n; i++) {
        if(a[i] >= max2 && a[i] < max) max2 = a[i];
        if(a[i] <= min2 && a[i] > min) min2 = a[i];
    }

    double ave = (double)sum/n;
    printf("%lli %lli\n%.2f", max2, min2, ave);
}