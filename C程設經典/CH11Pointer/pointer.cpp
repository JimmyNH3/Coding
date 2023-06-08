#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int n;
    cout << "輸入幾個數:";
    cin >> n;
    int *ptr = (int *)malloc(sizeof(int) * n);
    if(ptr == NULL) {
        cout << "失敗";
    } else {
        for(int i = 0; i < n; i++) {
            cout << "輸入第" << i+1 << "個整數";
            cin >> ptr[i];
            cout << "\n";
        }

        for(int i = 0, j = n - 1; i < n / 2; i++, j--) {
            swap(ptr+i, ptr+j);
        }

        for(int i = 0 ; i < n; i++) {
            cout << *(ptr + i) << " ";
        }
    }
}