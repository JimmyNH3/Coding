#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, v, c, dp[1000] = {0};
    while(cin >> n) {
        memset(dp, 0, sizeof(dp));
        while(n --) {
            cin >> v >> c;
            for(int i = 100; i >= v; i--) {
                dp[i] = max(dp[i], dp[i - v] + c);
            }
        }
        cout << dp[100] << endl;
    }
}
