#include <stdio.h>

int *max(int arr[], int size) {
    int *maxv = arr, i;
    for(i = 1; i < size; i++) {
        if(*(arr + i) > *maxv) {
            maxv = arr + i;
        } 
    }
    return maxv;
}

int main() {    
    int arr[10] = {1, 3, 4, 5, 6, 34, 100, 8, 9, 10}, i;
    for(i = 0; i < 10; i++) {
        printf("%p : %d\n", arr+i, *(arr+i));
    }
    int *maxv = arr;
    printf("%p : %d", max(arr, 10), *(max(arr, 10)));
}
