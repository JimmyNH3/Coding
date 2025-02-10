#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *arr = (int*) malloc(10*sizeof(int)), i, sum = 0;
    memset(arr, 0, sizeof(int));
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for(i = 0; i < 10; i++) sum += arr[i];
    printf("%d", sum);
}