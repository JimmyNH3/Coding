#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3,4,5,6,7,8,9};
    int *p = arr + 6, *q = arr+9;
    printf("%p %p %lld",p, q, p-q);
}
