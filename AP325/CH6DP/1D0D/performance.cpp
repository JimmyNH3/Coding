#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    long long dp[10000];
    int n;
    cin >> n;
    dp[0] = 0;
    for(int i =  1; i <= n; i++) {
        cin >> dp[i];
    }
    for(int i = 2; i <= n; i++) {
        dp[i] = max(dp[i - 1], dp[i] + dp[i - 2]);
    }
    cout << dp[n];
}