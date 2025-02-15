#include <stdio.h>

int max(int *iptr[], int n);

int main() {
    int n, i;
    int array[100];
    int *iptr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &(array[i]));
        iptr[i] = &(array[i]);
    }
    printf("%d\n", max(iptr, n));
    return 0;
}

int max(int *iptr[], int n) {
    int maxnum = -1000, i;
    for(i = 0; i < n; i++) {
        if(*iptr[i] > maxnum) {
            maxnum = *iptr[i];
        }
    }
    return maxnum;
}