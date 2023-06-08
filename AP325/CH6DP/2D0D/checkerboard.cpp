#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int a[100][100] = {0};
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }      
    }
    for(int i = 1; i < m; i++) {
        a[i][0] += a[i - 1][0];
    }
    for(int j = 1; j < n; j++) {
        a[0][j] += a[0][j - 1];
    }
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            a[i][j] += max(a[i - 1][j],a[i][j - 1]);
        }
    }
    cout << a[m - 1][n - 1];
}
