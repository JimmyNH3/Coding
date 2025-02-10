#include <stdio.h>
#include <string.h>

void carry(int *arr, int n) {
    int i;
    for(i = 0; i < n - 1; i++) {
        if(arr[i] >= 10) {
            arr[i + 1] += arr[i] / 10;
            arr[i] %= 10;
        }
    }
}

void add(int *BigNum1, int *BigNum2, int *BigAdd, int n) {
    int i;
    for(i = 0; i < 100; i++) BigAdd[i] += BigNum1[i] + BigNum2[i];
    carry(BigAdd, n);
}

void mult(int *BigNum1, int *BigNum2, int *BigMult, int n) {
    int i, j;
    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) BigMult[i + j] += BigNum1[i] * BigNum2[j];
    }
    carry(BigMult, n);
}


int main() {
    char num1[100], num2[100];
    scanf("%s %s", num1, num2);

    int BigNum1[100], BigNum2[100];
    memset(BigNum1, 0, 100*sizeof(int));
    memset(BigNum2, 0, 100*sizeof(int));

    int i;
    for(i = 0; i < strlen(num1); i++) BigNum1[i] = num1[strlen(num1) - 1 - i] - '0';
    for(i = 0; i < strlen(num2); i++) BigNum2[i] = num2[strlen(num2) - 1 - i] - '0';

    int BigAdd[105],  BigMult[205];
    memset(BigAdd, 0, 105*sizeof(int));
    memset(BigMult, 0, 205*sizeof(int));

    add(BigNum1, BigNum2, BigAdd, 105);
    mult(BigNum1, BigNum2, BigMult, 205);

    printf("BigNum1+BigNum2=");
    i = 104;
    while(i >= 0) {
        if(BigAdd[i] != 0) break;
        i--;
    }
    while(i >= 0) {
        printf("%d", BigAdd[i]);
        i--;
    }

    printf("\nBigNum1*BigNum2=");
    i = 204;
    while(i >= 0) {
        if(BigMult[i] != 0) break;
        i--;
    }
    while(i >= 0) {
        printf("%d", BigMult[i]);
        i--;
    }
}

