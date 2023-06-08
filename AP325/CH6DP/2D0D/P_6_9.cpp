#include <bits/stdc++.h>
using namespace std;
int dp[10005];
int main () {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, w;
    cin >> n >> w;
    int weight[n], p[n];
    for(int i = 0; i < n; i++) cin >> weight[i];
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) {
        for(int j = w; j >= weight[i]; j--) {
            dp[j] = max(dp[j], dp[j - weight[i]] + p[i]);
        }
    }
    cout << dp[w];
}
