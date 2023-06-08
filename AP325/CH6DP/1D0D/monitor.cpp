#include <bits/stdc++.h>
using namespace std;
int main() {
    //ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    long long dp[10000];
    cin >> n;
    int c[n];
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    dp[0] = c[0];
    dp[1] = c[1];
    dp[2] = c[2] + min(c[1] , c[0]);
    for(int i = 3; i < n; i++) {
        dp[i] = c[i] + min(min(dp[i - 1], dp[i - 2]),dp[i - 3]);
    }
    cout << min(dp[n-2], dp[n - 1]);
}
