#include <bits/stdc++.h>
using namespace std;
long long dp[10005][10005] = {0}, grid[10005][10005] = {0};

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int m, n;
    cin >> m >> n;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    //unit
    
    for(int i = 1; i < m; i++) grid[i][0] += grid[i - 1][0];
    for(int j = 1; j < n; j++) grid[0][j] += grid[0][j - 1];

    //dp
    long long maxnum = 0;

    for(int a = 0; a < m; a++) {
        for(int b = 0; b < n; b++) {
            for(int i = 1; i < m; i++) {
                for(int j = 1; j < n; j++) {
                    grid[i][j] += max(grid[i - 1][j], grid[i][j - 1]);
                    maxnum = max(maxnum, grid[i][j]);
                }
            }
        }
    }
    
    cout << maxnum;
}
