#include <bits/stdc++.h>
using namespace std;
long long matrix[10000][10000];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int maxnum = 0, sum = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] + sum > 0) sum += matrix[i][j];
            else sum = 0;
            maxnum = max(maxnum, sum);
        }
    }
    cout << maxnum << endl;
}