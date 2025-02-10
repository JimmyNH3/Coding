#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a, const void * b) {
    return *(int*)a - *(int*)b;
}

int bi(int *arr, int target, int n) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = (left + right)/2;
        if(arr[mid] > target) right = mid - 1;
        else if(arr[mid] < target) left = mid + 1;
        else return mid;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], i;
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    qsort(arr, n, sizeof(int), cmp);

    int target;
    scanf("%d", &target);

    printf("after sorting:");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    int index = bi(arr, target, n);
    index == -1 ? printf("\ntarget not found") : printf("\nindex = %d", index);
}



