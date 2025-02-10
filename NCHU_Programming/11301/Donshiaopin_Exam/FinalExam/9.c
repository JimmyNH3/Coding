#include <stdio.h>
int main() {
// declare
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
int *p = &a[4];
int *q = p + 2;
// calculate
for(i=3;i<10;i++) a[i] = a[i-2] + 1;
*(++q) = *(++p);
q++;
*(q++) = *(p++);
// print
printf("%d %lld %d\n", *a + *q - *p, q-p, *p-*q);
for(i=4;i<8;i++) printf("%d ", a[i]);
}